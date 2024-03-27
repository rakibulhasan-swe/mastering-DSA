// WAP that takes n integer numbers and an integer k, and checks if there are two numbers in the array which sums to k. You have to do it inside the Merge Sort function, divide and conquer fashion in O(nlogn).


#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> v){
    int k;
    cin >> k;
    // base case 
    if(v.size()==1) return v;

    int mid = (v.size()/2);

    vector<int>a, b;
    for(int i=0; i<mid; i++) a.push_back(v[i]);
    for(int i=mid; i<v.size(); i++) b.push_back(v[i]);

    vector<int> a1 = merge_sort(a);
    vector<int> b1 = merge_sort(b);

    vector<int> sorted_v;
    int idx1 = 0, idx2 = 0;

    for(int i=0; i<v.size(); i++){
        if(a1[idx1]+b1[idx2] == k) {
            cout << "YES\n";
            break;
        }
    }

    return sorted_v;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k; cin >> n;

    vector<int> v(n);
    for(auto &x: v) cin >> x;

    cin >> k;
    merge_sort(v);
    
    return 0;
}