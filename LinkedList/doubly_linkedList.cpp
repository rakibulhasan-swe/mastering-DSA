#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nxt;
    Node* prv;
};

class DoublyLinkedList{
public:
    Node* head;
    int sz;

    DoublyLinkedList(){
        head = NULL;
        sz = 0;
    }
    // create Node
    Node* createNode(int value){
        sz++;

        Node* newNode = new Node;
        newNode->data = value;
        newNode->nxt = NULL;
        newNode->prv = NULL;

        return newNode;
    }
    // insert at head
    void insertAtHead(int value){
        Node *newNode = createNode(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }

    // traverse
    void traverse(){
        Node* a = head;
        while(a != NULL){
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    // insert at any index
    void insertAtAnyIndex(int idx, int value){
        if(idx<0 || idx>sz) return;

        if(idx==0){
            insertAtHead(value);
            return;
        }

        Node *a = head;
        int cur_idx = 0;

        while(cur_idx!=idx-1){
            a = a->nxt;
            cur_idx++;
        }
        Node* newNode = createNode(value);
        Node* nextNode = a->nxt;

        // connect to next node
        nextNode->prv = newNode;
        newNode->nxt = nextNode;

        // connect to previous node
        a->nxt = newNode;
        newNode->prv = a;
    }

    // size
    void getSize(){
        cout << "Size: " << sz << "\n";
    }

    // delete a node
    void deleteAnyNode(int idx){
        sz--;

        Node* a = head;

        int cur_idx = 0;
        while(cur_idx != idx-1){
            a = a->nxt;
        }
        Node* nextNode = a->nxt;

        a->nxt = nextNode->nxt;
        nextNode->nxt->prv = a;

        delete nextNode;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    DoublyLinkedList l;

    l.insertAtHead(20);
    l.insertAtHead(40);
    l.insertAtHead(10);

    l.traverse();
    l.getSize();

    l.insertAtAnyIndex(1, 100);
    l.traverse();
    l.getSize();

    l.insertAtAnyIndex(0, 200);
    l.traverse();
    l.getSize();

    l.deleteAnyNode(1);
    l.traverse();
    l.getSize();

    return 0;
}