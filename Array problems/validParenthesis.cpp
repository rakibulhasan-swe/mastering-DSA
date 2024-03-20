#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool res = true;
    cin >> s;

    for(int i=0; i<s.size()-1; i++){
        if(s[i] == '(' && s[i+1] != ')'){
            res = false;
            break;
        }else if(s[i] == '{' && s[i+1] != '}'){
            res = false;
            break;
        }else if(s[i] == '[' && s[i+1] != ']'){
            res = false;
            break;
        }
    }

    if(res){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }


    return 0;
}
