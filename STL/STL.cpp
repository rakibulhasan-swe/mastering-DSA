#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<ll> v(n+1, 0);

    // prefix sum
    for (int i=1; i<=n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    // for(int val: v) cout << val << " ";
    // cout << "\n";

    // printing sum based on query (left to right)
    while (q--) {
        int l, r;
        cin >> l >> r;

        ll sum = v[r] - v[l-1];
        cout << sum << "\n";
    }

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a;
//     for(int i=0; i<n; i++){
//         int x; cin >> x;
//         a.push_back(x);
//         if(a[i] > 0) a[i] = 1;
//         else if(a[i] == 0) continue;
//         else a[i] = 2;
//     }

//     for(int val: a) cout << val << " ";
//     cout << "\n";

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a;
//     for(int i=0; i<n; i++){
//         int x;
//         cin >> x;
//         a.push_back(x);
//     }

//     for(int i=n-1; i>=0; i--) cout << a[i] << " ";
//     cout << "\n";

//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a;
//     for(int i=0; i<n; i++){
//         int x;
//         cin >> x;
//         a.push_back(x);
//     }
//     vector<int> b;
//     for(int i=0; i<n; i++){
//         int x;
//         cin >> x;
//         b.push_back(x);
//     }
//     vector<int> v(b.begin(), b.end());
//     v.insert(v.end(), a.begin(), a.end());

//     for(int val: v) cout << val << " ";
//     cout << "\n";

//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // int n;
//     // cin >> n;

//     // vector<int> v(n);

//     // for(int i=0; i<n; i++) cin >> v[i];

//     // // v.insert(v.begin()+0, 30);
//     // v.erase(v.begin()+2);

//     // for(int x:v) {
//     //     cout << x << " ";
//     // };

//     // int a[4] = {12,13,14,15};
//     // vector<int> v(a, a+4);

//     // v.insert(v.begin()+3, 20);

//     // cout << v[3] << endl;
//     vector<int> v={1,2,3,4,5};
//     v.erase(v.begin()+2, v.end());

//     for(int val: v) cout << val << " ";

//     return 0;
// }