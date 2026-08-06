#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        if(i==n-1){
            cout << v[i] << "\n";
            break;
        }else{
            cout << v[i] << " ";
        }
    }

    return 0;
}