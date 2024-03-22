#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int hash = 0, dot = 0, ans = 0;

        for(int i=0; i<n; i++){
            if(s[i]=='.' && hash==1){
                ans++;
                dot++;
            }else if(s[i]=='.' && hash==0){
                dot++;
                ans++;
                hash++;
            }else if(s[i]=='#' && hash==1){
                hash=0;
                dot=0;
            }

            if(dot>=3) {
                ans = 2;
                break;
            }
        }
        cout << ans << "\n";
    }
    

    return 0;
}