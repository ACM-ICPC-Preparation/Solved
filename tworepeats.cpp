//Every integer appears twice, two integers appear once, what are they?
#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b,c) for(int a=b ; a<c ; a++)
int main(){
    int n; cin>>n;
    int a[n];
    
    //Brute Force in O(N^2)
    FOR(i,0,n){
    	cin>>a[i];
	}
	FOR(i,0,n){
		int cnt = 0;
		FOR(j,0,n){
			if(a[i]==a[j]){
				cnt++;
			}
		}
		if(cnt==1){
			cout<<a[i]<<" ";
		}
	}
    
    //Using map in O(NlogN)
    map<int,int> mp;
    FOR(i,0,n){
        mp[a[i]]++;  //O(logN)
    }
    FOR(i,0,n){
    	if(mp[a[i]]==1){
	        cout<<a[i]<<" ";
	    }
	}
	
	//Using bit manipulation in O(N)
	sort(a,a+n);
    int x = 0;
    FOR(i,1,n){
    	x = a[i-1]^a[i];
    	if(x==0){
    		i++;
		}
		else{
			cout<<a[i-1]<<" ";
			if(i==n-1){
				cout<<a[i]<<" ";
			}
		}
	}
	
	//Another bit manipulation method in O(N)
	x=0;
	FOR(i,0,n){
		x = x ^ a[i];
	}
	int cnt  = 0;
	while(x){
		if(x&1){
			break;
		}
		cnt++;
		x = x >> 1;
	}
	int x1=0,x2=0;
	FOR(i,0,n){
		if(a[i]&(1<<cnt)){
			x1 = x1 ^ a[i];
		}
		else{
			x2 = x2 ^ a[i];
		}
	}
	cout<<x1<<" "<<x2;
    
    /*
		10
		1 1 2 5 3 2 3 4 7 4
	*/
    return 0;
}
    
    
