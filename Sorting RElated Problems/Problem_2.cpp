// WAP that takes n integer numbers, sorts them using Merge sort.

#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> v){
    // base case 
    if(v.size()==1) return v;

    int mid = (v.size()/2);

    vector<int>a, b;
    for(int i=0; i<mid; i++) a.push_back(v[i]);
    for(int i=mid; i<v.size(); i++) b.push_back(v[i]);

    vector<int> a1 = merge_sort(a);
    vector<int> b1 = merge_sort(b);

    vector<int> sorted_v;
    int idx1 = 0, idx2 = 0;

    for(int i=0; i<v.size(); i++){
        if(idx1==a1.size()) sorted_v.push_back(b1[idx2++]);
        else if(idx2==b1.size()) sorted_v.push_back(a1[idx1++]);
        else if(a1[idx1]<b1[idx2]) sorted_v.push_back(a1[idx1++]);
        else sorted_v.push_back(b1[idx2++]);
    }
    return sorted_v;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for(auto &x: v) cin >> x;

    vector<int> sorted_v = merge_sort(v);

    for(auto x: sorted_v) cout << x << " ";
    cout << "\n";

    return 0;
}