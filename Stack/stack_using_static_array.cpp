#include<bits/stdc++.h>
using namespace std;

const int maxSize = 500;

class Stack{
public:
    int arr[maxSize];
    int stack_size = 0;

    Stack(){
        stack_size = 0;
    }

    // push
    void push(int value){
        if(stack_size+1>maxSize){
            cout << "Stack is full\n";
            return;
        }
        arr[stack_size] = value;
        stack_size++;
    }
    // pop
    void pop(){
        if(stack_size==0){
            cout << "Stack is empty\n";
            return;
        }
        stack_size--;
        arr[stack_size] = 0;
    }
    // view top element
    int top(){
        if(stack_size == 0){
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[stack_size-1];
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << "\n";

    s.pop();
    cout << s.top() << "\n";

    return 0;
}
