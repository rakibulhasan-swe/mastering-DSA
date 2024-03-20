#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    for(int i=n1; i<=n2; i++){
        int flag = false;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j == 0){
                flag = true;
                break;
            }
        }
        if(!flag)
            cout << i << " ";
    }

    cout << endl;

    return 0;
}
