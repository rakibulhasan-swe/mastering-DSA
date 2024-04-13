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
    int getSize(){
        return sz;
    }

    // delete at head
    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        sz--;
        Node *a = head;
        Node *b = head->nxt;
        delete a;

        if(b!=NULL) b->prv = NULL;
        head = b;
    }

    // delete a node
    void deleteAnyNode(int idx){
        if(idx >= sz){
            cout << "index does not exist.\n";
            return;
        }
        sz--;

        Node* a = head;

        int cur_idx = 0;
        while(cur_idx != idx){
            a = a->nxt;
            cur_idx++;
        }
        Node* prevNode = a->prv;
        Node* nextNode = a->nxt;

        if(prevNode!=NULL){
            prevNode->nxt = nextNode;
        }
        if(nextNode!=NULL){
            nextNode->prv = prevNode;
        }
        delete a;
        if(idx==0){
            head = nextNode;
        }
    }
};

class Stack{
public:
    DoublyLinkedList dl;

    Stack(){

    }

    int top(){
        if(dl.getSize()==0){
            cout << "Stack is Empty ";
            return -1;
        }
        return dl.head->data;
    }

    void push(int value){
        dl.insertAtHead(value);
    }

    void pop(){
        if(dl.getSize()==0){
            cout << "Stack is Empty\n";
            return;
        }
        dl.deleteAtHead();
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    Stack s;
    s.push(10);
    cout << s.top() << "\n";
    s.push(20);
    cout << s.top() << "\n";
    s.push(30);
    cout << s.top() << "\n";


    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";

    return 0;
}