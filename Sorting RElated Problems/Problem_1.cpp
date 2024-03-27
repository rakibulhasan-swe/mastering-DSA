// WAP that takes 2 sorted (in non-increasing order) integer arrays as input, then merges the two arrays into one array sorted in non-increasing order in O(n+m). 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n;

    vector<int> a(n);
    for(auto &x: a) cin >> x;

    cin >> m;
    vector<int> b(m);
    for(auto &x: b) cin >> x;

    int idx1=0, idx2=0;

    int sz = n+m;

    vector<int> v;

    for(int i=0; i<sz; i++){
        if(idx1==a.size()){
            v.push_back(b[idx2++]);
        }else if(idx2==b.size()){
            v.push_back(a[idx1++]);
        }else if(a[idx1]>b[idx2]){
            v.push_back(a[idx1++]);
        }else{
            v.push_back(b[idx2++]);
        }
    }

    for(auto x: v) cout << x << " ";
    cout << "\n";

    return 0;
}
