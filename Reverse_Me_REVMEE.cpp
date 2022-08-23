#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    int N, i, A[100000];
    cin>>N;
    for (i=0; i<N; i++)
        cin>>A[i];

    for (i=N-1; i>=0; i--){
        cout<<A[i]<<" ";
    }

    return 0;
}