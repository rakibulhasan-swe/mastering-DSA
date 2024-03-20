#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a; // declaring vector

    a.resize(15); // declaring a array size of 15

    for(int i=0; i<10; i++)
    {
        // cout << "Before push size: " << a.size() << endl;
        a.push_back(i);
        // cout << "After push size: " << a.size() << endl;
    }

    a.insert(a.begin(), 100); // insert at any position
    a.insert(a.begin()+2, 23);

    for(int i=0; i<a.size(); i++)
        cout << a[i] << " ";

    cout << endl;

    return 0;
}
