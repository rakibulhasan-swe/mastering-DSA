#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];
        
    int curr = v[0];

    for(int i=0; i<n-1; i++){
        if(v[i+1]>v[i]){
            curr = v[i+1];
        }else {
            break;
        }
    }
    cout << curr << "\n";

    return 0;
}