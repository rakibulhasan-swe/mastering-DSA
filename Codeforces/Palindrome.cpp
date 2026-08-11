#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s; cin >> s;
    bool flag = true;

    for(int i=0; i<s.size()/2; i++){
        if(s[i]!=s[s.size()-i-1]){
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}