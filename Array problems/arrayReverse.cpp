#include<bits/stdc++.h>
using namespace std;

// Function to reverse the array - o(n) complexity
void reverse(int n, int arr[]){
     for(int i=0; i<n/2; i++)
         swap(arr[i], arr[n-i-1]);
}

//Function to print the array
void printArray(int n, int arr[]){
     for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    printArray(n, arr);
    cout << "\n";

    reverse(n, arr);
    printArray(n, arr);
    
    cout << "\n";

    return 0;
}
