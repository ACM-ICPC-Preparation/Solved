//Petr and a combination lock
#include<bits/stdc++.h>
using namespace std;
#define for(a,b,c) for(int a=b ; a<c ; a++)
int main(){
	int n; cin>>n;
	int a[n]; 
	for(i,0,n){
		cin>>a[i];
	}
	for(i,0,(1<<n)){
		int acc=0;
		for(j,0,n){
			if(i&(1<<j)){
				acc+=a[j];
			}
			else{
				acc-=a[j];
			}
		}
		if(acc%360==0){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
    return 0;
}
    
    
