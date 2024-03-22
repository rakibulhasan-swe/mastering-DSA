#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int v[n];
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        if(is_sorted(v, v+n) || k > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}