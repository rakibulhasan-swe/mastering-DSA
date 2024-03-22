#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        if(v[0]==1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}