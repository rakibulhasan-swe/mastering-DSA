#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool binarysearch(vector<ll> v, int n){
    int l = 0, r = v.size()-1;

    while(l<=r){
        int mid = (l+r)/2;

        if(v[mid] == n) return true;
        else if(n > v[mid]) l = mid+1;
        else r = mid-1;
    }
    return false;
}

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    while(q--){
        int targeted_elem;
        cin >> targeted_elem;

        bool flag = binarysearch(v, targeted_elem);
        
        if(flag) cout << "found\n";
        else cout << "not found\n";
    }

    return 0;
}