#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc; cin >> tc;

    while(tc--){
        string s;
        cin >> s;

        int len = s.size();

        if(len>10){
            int sz = len-2;
            cout << s[0] << sz << s[len-1] << "\n";
        }else{
            cout << s << "\n";
        }

    }

    return 0;
}