#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=m-1; j>=0; j--){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}