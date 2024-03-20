#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];


    int maxELement = *max_element(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        if(arr[i] == maxELement){
            cout << i << "\n";
            break;
        }
    }


    return 0;
}
