#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, power = 0, binNum = 0;
    cin >> n;

    while(n>0){
       int rem = n%2;
       binNum += (rem * (int)pow(10, power));
       power++;
       n/=2;
    }
    cout << binNum << "\n";

    return 0;
}