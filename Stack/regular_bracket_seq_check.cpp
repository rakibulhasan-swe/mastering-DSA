#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<char> st;
    for(int i=0; i<s.size(); i++){
        char now = s[i];
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(now);
        }else{
            if(st.empty()){
                cout << "Invalid\n";
                return 0;
            }
            if(now==')' && st.top()=='('){
                st.pop();
            }else if(now=='}' && st.top()=='{'){
                st.pop();
            }else if(now==']' && st.top()=='['){
                st.pop();
            }else{
                cout << "Invalid\n";
                return 0;
            }
        }
    }

    if(st.empty()) cout << "Valid\n";
    else cout << "Invalid\n";

    return 0;
}