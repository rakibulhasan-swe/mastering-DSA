#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &x: v) cin >> x;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(v[j]>v[j+1]) swap(v[j], v[j+1]);
        }
    }

    for(auto x: v) cout << x << " ";
    cout << "\n";

    return 0;
}