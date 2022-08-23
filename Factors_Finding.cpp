#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	long long N, j, factors[100000];
    cout<<":";
	cin>>N;
	
	j = 0;
	for (int i=1; i<=N; i++){
	    if (N%i == 0){
	        factors[j] = i;
            j++;
        }
	}

	cout<<j<<endl;
	sort(factors, factors+j);
	for (int i=0; i<j; i++){
	    cout<<factors[i]<<" ";
	}
	return 0;
}
