#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    int dec = 0, power = 0;
    while (n > 0){
        dec += (n % 10) * pow(2, power);
        power++;
        n /= 10;
    }
    cout << dec << "\n";

    return 0;
}