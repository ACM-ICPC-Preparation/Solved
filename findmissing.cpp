//Given n and an array a of size n-1 find the missing number from 1 to n.

#include<bits/stdc++.h>
using namespace std;

#define FOR(A,B,C) for(int A=B ; A<C ; A++)

int main(){
	vector<int> a{1,3,6,5,2};
	int size = sizeof(a)/sizeof(a[0]);
	//or simply : size = a.size()
	sort(a.begin(),a.end()); //1,2,3,5,6
	
	//Naive method
	FOR(i,0,size){
		if(find(a.begin(),a.end(),i+1) == a.end()){
			cout<<i+1<<'\n';
		}
	}
	
	//Efficient Method
	cout<<(size*(size+1)/2) - accumulate(a.begin(),a.end(),0);
	
	
	return 0;
}
