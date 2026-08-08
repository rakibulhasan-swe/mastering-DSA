#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc; cin >> tc;

    while(tc--){
        int n; cin >> n;
        vector<int>v(n);
        
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int odd = 0;
        for(int x: v){
            if(x%2 != 0) odd++;
        }

        cout << odd << "\n";
    }
    return 0;
}