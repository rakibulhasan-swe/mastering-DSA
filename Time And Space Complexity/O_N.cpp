#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i]; // O(n)

    int sum = 0;
    for(int i=0; i<n; i++) sum+=v[i]; // O(n)

    cout << sum << "\n";

    return 0;
}

/*
TC = O(n)
SC = O(n)
*/