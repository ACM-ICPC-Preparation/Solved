//Find the prefix sum of given array elements.

#include<bits/stdc++.h>
using namespace std;
#define FOR(A,B,C) for(int A=B ; A<C ; A++)


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n = 5;
	int a[5] = {10,20,40,60,50};
	
	FOR(i,1,n){
	    a[i] = a[i] + a[i-1];
	}
	FOR(i,0,n){
	    cout<<a[i]<<" ";
	}
	return 0;
}
