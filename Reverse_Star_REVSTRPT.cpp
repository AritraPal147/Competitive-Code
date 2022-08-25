//Traingle star pattern
#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int i, j, n;
    cout<<":";
    cin>>n;

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i+j+1 >= n)
                cout<<'*';
            else
                cout<<' ';
        }
        cout<<'\n';
    }
    return 0;
}