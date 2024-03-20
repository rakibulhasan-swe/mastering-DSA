#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, mult = 1;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++)
        sum+=arr[i];

    for(int i=0; i<n; i++)
        mult*=arr[i];

    cout << "Summation of all array values is: " << sum << endl;
    cout << "Multiplication of all array values is: " << mult << endl;


    return 0;
}
