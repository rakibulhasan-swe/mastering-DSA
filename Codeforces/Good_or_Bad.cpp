#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        bool flag = false;

        for(int i=2; i<s.size(); i++){
            if((s[i-2] == '0' && s[i-1] == '1' && s[i] == '0') || (s[i-2] == '1' && s[i-1] == '0' && s[i] == '1')){
                flag = true;
                break;
            }
        }
        if(flag) cout << "Good\n";
        else cout << "Bad\n";
    }

    return 0;
}