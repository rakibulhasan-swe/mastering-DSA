#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> a){
    int n = a.size();

    // base case
    if(n<=1) return a;

    // choosing pivot - first element
    int pivot = a[0];

    // cout << "Pivot " << pivot << "\n";

    // choosing value according to pivot. small one will be on left and greater one will be on right
    vector<int> b, c;
    for(int i=1; i<n; i++){
        // if(a[i]==pivot) continue;

        if(a[i] <= pivot) b.push_back(a[i]);
        else c.push_back(a[i]);
    }

    // debug
    // cout << "b = ";
    // for(auto x: b) cout << x << " ";
    // cout << "\n";
    // cout << "c = ";
    // for(auto x: c) cout << x << " ";
    // cout << "\n";

    // divide
    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);

    // merging the elemets
    vector<int> sorted_a;
    
    // left part will be the smaller parts so it should be pushed first
    for(int i=0; i<sorted_b.size(); i++) sorted_a.push_back(sorted_b[i]);

    // push pivot element
    sorted_a.push_back(pivot);

    // now the right part as it is consists of bigger values
    for(int i=0; i<sorted_c.size(); i++) sorted_a.push_back(sorted_c[i]);

    return sorted_a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;

    vector<int> v(n);
    for(auto &x: v) cin >> x;

    vector<int> sorted_v = quick_sort(v);

    for(auto x: sorted_v) cout << x << " ";
    cout << "\n";

    return 0;
}