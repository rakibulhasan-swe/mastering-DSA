#include<bits/stdc++.h>
using namespace std;

bool isSquare[100000001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, cnt = 0;
    cin >> n;

    for(int i=1; i<=n; i++){
        isSquare[i*i] = true;
    }

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            int c = i*i + j*j;
            if(c <= n*n && isSquare[c]) cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}