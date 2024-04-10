#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> v, int n)
{
    int key, j;
    for (int i=1; i<n; i++) {
        key = v[i];
        j = i - 1;

        while (j>=0 && v[j]>key) {
            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = key;
    }
}

int main()
{
    vector<int> v = { 12, 11, 13, 5, 6 };

    insertionSort(v, v.size());

    for(auto x: v) cout << x << " ";
    cout << "\n";

    return 0;
}
// This is code is contributed by rathbhupendra
