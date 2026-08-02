// Find character lowercase or uppercase
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    char ch;
    cin >> ch;

    if(ch>='a' && ch<='z') cout << "Lowercase\n";
    else if(ch>='A' && ch<='Z') cout << "Uppercase\n";
    else cout << "Invalid Input\n";

    return 0;
}