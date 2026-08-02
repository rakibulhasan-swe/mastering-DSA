#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool isPrime = true;

    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    cout << (isPrime ? "Prime" : "Not Prime") << "\n";

    return 0;
}