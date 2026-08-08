#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, size = 0;
    cin >> n;
    size = n*7;

    vector<int> v(size);

    for(int i=0; i<size; i++)
        cin >> v[i];

    long long sum = 0;

    for(int i=0; i<size; i++){
        sum += v[i];
        if(i%7==6){
            cout << sum << " ";
            sum = 0;
        }
    }

    if(sum != 0)
        cout << sum << "\n";

    return 0;
}