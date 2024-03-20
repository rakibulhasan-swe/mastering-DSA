#include<bits/stdc++.h>
using namespace std;

void arrayPrint(vector<int> arr, int n)
{
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, distinctELe = 0;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        if(arr[i-1] != arr[i])
          distinctELe++;
    }

    // arrayPrint(arr, n);

    cout << distinctELe << endl;


    return 0;
}
