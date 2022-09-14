#include <bits/stdc++.h>
using namespace std;

int compute(int x){
 if(x<=0)  
    return 0;
else{ 
compute(x-1);
cout<<"Hello"<<x<<endl; 
compute(x-1);
}
}
int main(){	
int a=3;	
compute(a);
return 0;}