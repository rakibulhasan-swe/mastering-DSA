#include<bits/stdc++.h>
using namespace std;

int sz = 0;

class Node{
public:
    int data;
    Node* nxt;
};

class LinkedList{
public:
    Node * head;
    LinkedList(){
        head = NULL;
    }

    // create node
    Node* createNode(int value){
        sz++;
        Node* newNode = new Node;
        newNode->data = value;
        newNode->nxt = NULL;

        return newNode;
    }

    // insert at head
    void insertAtHead(int value){
        Node* a = createNode(value);

        if(head == NULL){
            head = a;
            return;
        }
        // if not empty
        a->nxt = head;
        head = a;
    }

    // insert at any index
    void insertAtAnyIndex(int idx, int value){
        if(idx < 0 || idx > sz) return;
        // sz = 0 means - insert at head
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
        Node* n = createNode(value);
        n->nxt = a->nxt;
        a->nxt = n;
    }

    // traverse
    void traverse(){
        Node* a = head;

        while(a!=NULL){
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    // get size
    int getSize(){
        return sz;
    }

    // delete at head
    void deleteAtHead(){
        if(head==NULL) return;

        Node* a = head;
        head = a->nxt;

        delete a;
        sz--;
    }

    // delete at any index
    void deleteAtAnyIndex(int idx){
        if(idx < 0 || idx > sz-1) return;
        // sz = 0 means - delete at head
        if(idx==0){
            deleteAtHead();
            return;
        }

        int cur_idx = 0;
        Node* a = head;
        while(cur_idx!=idx-1){
            a = a->nxt;
            cur_idx++;
        }
        Node* b = a->nxt;
        a->nxt = b->nxt;

        delete b;
        sz--;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    LinkedList l;

    l.insertAtHead(10);
    l.insertAtHead(20);
    l.insertAtHead(30);

    l.traverse();
    cout << "Size: " << l.getSize() << "\n";

    l.insertAtAnyIndex(0, 100);
    l.traverse();
    cout << "Size: " << l.getSize() << "\n";

    l.insertAtAnyIndex(4, 200);
    l.traverse();
    cout << "Size: " << l.getSize() << "\n";

    l.deleteAtHead();
    l.traverse();
    cout << "Size: " << l.getSize() << "\n";

    l.deleteAtAnyIndex(2);
    l.traverse();
    cout << "Size: " << l.getSize() << "\n";


    return 0;
}