#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(auto &x:v) cin >> x;

    // Found or not Found
    for(auto x:v){
        if(x==k) {
            cout << "Found\n";
            break; // return 0;
        }
    }
    cout << "Not Found\n";

    // First Founded index
    for(int i=0; i<n; i++){
        if(v[i]==k){
            cout << i << "\n";
            break;
        }
    }

    // all possible index
    for(int i=0; i<n; i++){
        if(v[i]==k)
            cout << i << " ";
    }
    cout << "\n";

    return 0;
}