#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    long long n, sum = 0; cin >> n;

    for(int i=0; i<n-1; i++){
        int a;
        cin >> a;
        sum+=a;
    }

    long long sum1 = 0;
    for(int i=1; i<=n; i++){
        sum1+= i;
    }
        
    cout << sum1-sum << "\n";

    return 0;
}