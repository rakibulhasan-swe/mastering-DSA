#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    int arr[n][m];  

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int x; cin >> x;
    bool flag = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==x){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag) cout << "will not take number\n";
    else cout << "will take number\n";

    return 0;
}