#include <iostream>
using namespace std;

int main(){
    long long L, R, i;
    bool flag=true;
    cout<<":";
    cin>>L>>R;

    if (L%2 == 0)
        flag = !flag;
    
    if (flag){
        i = L;
        while (i<=R){
            cout<<i<<" ";
            i += 2;
        }
    }

    else{
        i = L+1;
        while (i<=R){
            cout<<i<<" ";
            i += 2;
        }
    }

    return 0;
}