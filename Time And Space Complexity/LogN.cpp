#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);

    for(auto &x:v) cin >> x;

    for(int i=0; i*i<n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}