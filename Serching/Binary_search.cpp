#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(auto &x:v) cin >> x;

    int low = 0, high = n-1;
    bool flag = 0;
    
    while(low<=high){
        int mid = (low+high)/2;

        if(v[mid]==k){
            cout << "Found at index " << mid << "\n";
            flag = 1;
            break;
        }else if(v[mid]>k){
            high=mid-1;
        }else{
            low = mid+1;
        }
    }

    if(!flag) cout << "Not Found\n";

    
    return 0;
}