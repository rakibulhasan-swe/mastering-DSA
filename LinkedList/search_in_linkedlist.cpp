#include<bits/stdc++.h>
using namespace std;

int sz = 0;

class Node{
    public:
        int data;
        Node * nxt;
};

class LinkedList{
public:
    Node * head;
    LinkedList(){
        head = NULL;
    }

    // create a linkedList
    Node* createNode(int value){
        Node* newNode = new Node;
        newNode->data = value;
        newNode->nxt = NULL;
        sz++;
        
        return newNode;
    }

    // insert in head
    void insertInHead(int value){
        Node* a = createNode(value);
        if(head == NULL){
            head = a;
            return;
        }
        // if head not null
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

    // search
    int search(int value){
        Node* a = head;
        int index = 0;

        while(a!=NULL){
            if(a->data == value){
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    // size
    int getSize(){
        return sz;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    LinkedList l;
    l.insertInHead(20);
    cout << "Size: " << l.getSize() << "\n";
    l.insertInHead(30);
    l.insertInHead(10);

    l.traverse();

    cout << l.search(20) << "\n";
    cout << "Size: " << l.getSize() << "\n";

    return 0;
}