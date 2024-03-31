#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* nxt;
};

class LinkList{
public:
    Node* head;

    LinkList(){
        head = NULL;
    }

    // createNode
    Node* createNode(int value){
        Node* newNode = new Node;
        newNode->data = value;
        newNode->nxt = NULL;

        return newNode;
    }
    // insert in head
    void insertAtHead(int value){
        Node* a = createNode(value);
        if(head == NULL){
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }
    // traverse
    void traverse(){
        Node *a = head;
        while(a!=NULL){
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    LinkList l;

    l.insertAtHead(10);
    l.insertAtHead(20);
    l.insertAtHead(30);

    l.traverse();

    l.insertAtHead(70);
    l.traverse();

    return 0;
}