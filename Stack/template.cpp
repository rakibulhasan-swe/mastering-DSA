#include<bits/stdc++.h>
using namespace std;

template <class T>

class Stack{
public:
    T *a;
    int stack_size;
    int capacity;

    Stack(){
        a = new T[1];
        capacity = 1;
        stack_size = 0;
    }

    // double the capacity of array
    void increaseCap(){
        T *tmp;
        tmp = new T[capacity*2];
        for(int i=0; i<capacity; i++)
            tmp[i] = a[i];
        swap(tmp, a);
        delete []tmp;
        capacity*=2;
    }

    // push
    void push(T value){
        if(stack_size+1>capacity){
            increaseCap();
        }
        a[stack_size] = value;
        stack_size++;
    }
    // pop
    void pop(){
        if(stack_size==0){
            cout << "Stack is empty\n";
            return;
        }
        stack_size--;
    }
    // view top element
    T top(){
        if(stack_size == 0){
            cout << "Stack is empty\n";
            // assert(false); // program crash
            T a;
            return a;
        }
        return a[stack_size-1];
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    Stack<int> s;
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
    // s.pop();
    // cout << s.top() << "\n";

    return 0;
}
