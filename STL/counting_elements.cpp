#include<bits/stdc++.h>
using namespace std;

int count_occurence(vector<int> v, int n){
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(n == v[i]) cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int cnt = 0;
    for(int i=0; i<n-1; i++){
        if(v[i+1] == v[i]+1){
            cnt+= count_occurence(v, v[i]);
        }
    }
    cout << cnt << "\n";

    return 0;
}