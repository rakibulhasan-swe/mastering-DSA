#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, x, ans = 0;
    cin >> n >> x;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int left = 0, right = n - 1;
    while (left <= right){
        if (v[left] + v[right] <= x){
            ans++;
            left++;
            right--;
        }else{
            ans++;
            right--;
        }
    }

    cout << ans << "\n";

    return 0;
}