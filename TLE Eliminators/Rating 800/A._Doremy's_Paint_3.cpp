#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector<int> v(n);
        for(auto &x:v) cin >> x;

        int unique_num = 0;
        sort(v.begin(), v.end());

        for(int i=0; i<n; i++){
            if(v[i]!=v[i+1]) unique_num++;
        }

        if(unique_num>=3) cout << "NO\n";
        else if(unique_num==1) cout << "YES\n";
        else {
            int n1=v[0], n2=v[n-1], c1=0, c2=0;
            for(auto x: v){
                if(n1==x) c1++;
                else if(n2==x) c2++;
            }
            if((n/2)<=c1 && (n/2)<=c2) cout << "YES\n";
            else cout << "NO\n";
        }

    }

    return 0;
}