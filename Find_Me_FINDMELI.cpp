#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    int N, K, i, A[100000];
    bool flag = false;
    cout<<":";
    cin>>N>>K;
    for (i=0; i<N; i++){
        cin>>A[i];
        if (A[i] == K)
            flag = !flag;
    }

    if (flag)
        cout<<1;
    else    
        cout<<-1;

    return 0;
}