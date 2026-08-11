#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s; cin >> s;
    int frq[26] = {0};

    for(char c: s){
        frq[c-'A']++;
    }

    int oddCount = 0;
    for(int i=0; i<26; i++){
        if(frq[i]%2 !=0) oddCount++;
    }

    int left = 0, right = s.size()-1;

    if(oddCount > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }
    else {
        for(int i=0; i<26; i++){
            for(int j=0; j<frq[i]/2; j++){
                s[left++] = char('A'+i);
                s[right--] = char('A'+i);
            }
        }
    }

    if(oddCount == 1){
        for(int i = 0; i < 26; i++){
            if(frq[i] % 2 != 0){
                s[left] = char('A' + i);
                break;
            }
        }
    }

    cout << s << "\n";

    return 0;
}