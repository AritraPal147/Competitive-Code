#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num[3];
    int i;

    cout<<":";
    for (i=0; i<3; i++)
        cin>>num[i];
    
    sort(num, num+3);
    if (num[0] != num[1])
        cout<<num[1];
    else{
        if (num[1] != num[2])
            cout<<num[2];
        else   
            cout<<num[1];
    }
    return 0;
}