#include<bits/stdc++.h>
using namespace std;

void print(list<int> l){
    // list<int> ::iterator it = l.begin();
    auto it = l.begin();

    while(it != l.end()){
        cout << *it << " ";
        it++;
    }
    cout << "\n";
}

void Insert(list<int> &l, int index, int value){
    auto it = l.begin();
    advance(it, index);
    l.insert(it, value);
}

void Delete(list<int> &l, int index){
    auto it = l.begin();
    advance(it, index);
    l.erase(it);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    list<int> l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    print(l);

    l.push_back(40);
    l.push_back(50);
    print(l);

    l.pop_back();
    print(l);

    l.pop_front();
    print(l);

    // insert at any position
    Insert(l, 1, 100);
    print(l);

    Insert(l, 3, 200);
    print(l);

    // delete at any position
    Delete(l, 1);
    print(l);

    cout << l.size() << "\n";

    return 0;
}