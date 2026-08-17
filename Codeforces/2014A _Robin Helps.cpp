#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc; cin >> tc;
    
    while(tc--){
        ll n, k, sum = 0, ans = 0;
        cin >> n >> k;
        vector<ll> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]>=k) sum+=v[i];
            else if(v[i]==0){
                if(sum){
                    sum--;
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}