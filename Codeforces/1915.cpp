#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long n) {
    long long root = sqrt(n);
    return root * root == n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        long long sum = 0;

        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            sum += x;
        }

        cout << (isPerfectSquare(sum) ? "YES" : "NO") << '\n';
    }
}