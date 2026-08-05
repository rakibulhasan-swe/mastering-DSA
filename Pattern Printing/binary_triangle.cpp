#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, value=1; cin >> n;

    for(int i=1; i<=n; i++){
        value = i%2;

        for(int j=1; j<=i; j++){
            cout << value;
            value = !value;
        }
        cout << "\n";
    }

    return 0;
}