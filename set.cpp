#include<bits/stdc++.h>
using namespace std;
int main(){
	//Use multiset if you want to store multiple same values
	//Use unordered_set for a "random" arranging order
	set<char> a;
	a.insert('S');
	a.insert('E');
	a.insert('E');
	a.insert('T');
	
	for(auto& str : a){
		cout<<str<<" ";
	}
	cout<<'\n';
	//Create set in descending order
	set<int, greater<int>> b;
	b.insert(1);
	b.insert(10);
	b.insert(4);
	b.insert(5);
	
	for(auto i : b){
	    cout<<i<<" ";
	}
	cout<<'\n';
	/******************SET IMPLEMENTAION****************/
	
	//Empty set container
	set<int, greater<int>> s1;
	
	//Insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
    s1.insert(50);
    s1.insert(10);
	
	set<int>::iterator itr;
	//Printing s1
	for(itr = s1.begin() ; itr!=s1.end() ; itr++){
	    cout<<*itr<<" ";
	}
	
	// assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : "
         << *s1.upper_bound(40) << endl;
 
    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) : "
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : "
         << *s2.upper_bound(40) << endl;
 
	
	return 0;
}
