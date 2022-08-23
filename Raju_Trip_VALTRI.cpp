#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    long int N;
    cin>>N;
    if ((N%5 == 0) || (N%6 == 0))
        cout<<"YES";
    else    
        cout<<"NO";

    return 0;
}