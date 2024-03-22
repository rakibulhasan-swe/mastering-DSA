#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        int prev = 0, ans = 0;
        for(int i=1; i<=n; i++){
            int a; cin >> a;
            ans = max(ans, a-prev);
            prev = a;
        }
        ans = max(ans, (x-prev)*2);

        cout << ans << "\n";
    }

    return 0;
}