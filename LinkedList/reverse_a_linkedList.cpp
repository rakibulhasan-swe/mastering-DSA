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

    // reverse printing
    void reversePrint(Node* a){
        if(a==NULL) return;

        reversePrint(a->nxt);
        cout << a->data << " ";
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

    l.reversePrint(l.head);

    return 0;
}