#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) cout << "*";
        // for spaces
        for(int k=1; k<=2*(n-i); k++) cout << " ";
        // stars
        for(int j=1; j<=i; j++) cout << "*";

        cout << "\n";
    }

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++) cout << "*";
        // for spaces
        for(int k=1; k<=2*(i-1); k++) cout << " ";
        // stars
        for(int j=i; j<=n; j++) cout << "*";

        cout << "\n";
    }

    return 0;
}