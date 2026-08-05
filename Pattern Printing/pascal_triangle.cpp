#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int>prev;

    for(int i=1; i<=n; i++){
        vector<int>curr;
        for(int j=1; j<=i; j++){
            if(j==1 || j==i) curr.push_back(1);
            else curr.push_back(prev[j-2]+prev[j-1]);
        }
        for(int x:curr) cout << x << " ";
        prev = curr;
        cout << "\n";
    }

    return 0;
}