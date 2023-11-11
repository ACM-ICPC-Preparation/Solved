//Generate subsets.
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b ; a<c ; a++)
int main(){
	int n; cin>>n;
	int a[n];
	FOR(i,0,n){
		cin>>a[i];
	}
	//2^n = 1<<n
	FOR(i,0,1<<n){
		FOR(j,0,n){
			if(i&(1<<j)){
				cout<<a[j]<<" ";
			}
		}
		cout<<'\n';
	}


    return 0;
}
    
    
