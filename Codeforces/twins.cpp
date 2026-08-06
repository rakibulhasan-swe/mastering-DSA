#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, sum = 0; cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }

    sort(v.rbegin(), v.rend());
    int cnt = 0;
    int val = sum/2;
    int sum1 = 0;

    for(int x: v){
        sum1+=x;
        cnt++;
        if(sum1>val) break;
    }

    cout << cnt << "\n";


    return 0;
}