#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int l, r; cin >> l >> r;
    string s; cin >> s;

    int left = l-1, right = r-1;
    while(left < right){
        swap(s[left++], s[right--]);
    }

    cout << s << "\n";

    return 0;
}