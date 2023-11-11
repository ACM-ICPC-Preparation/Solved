#include<bits/stdc++.h>
using namespace std;
int main(){
    
    //Create a map of strings to integers
    map<string,int> mp;
    
    //Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
    
    //Define an iterator pointing to the first element in the map
    auto it = mp.begin();
    //Or instead:
    //mp<string,int>::iterator it;
    
    //Iterate throug the map and print the elements
    while(it != mp.end()){
        cout<<"Key : "<< it->first <<'\n'<<"Value : "<< it->second << '\n';
        it++;
    }
    //Another method
    for(auto i = mp.begin() ; i != mp.end() ; i++){
        cout<<"Key : "<< i->first <<'\n'<<"Value : "<< i->second <<'\n';
    }
    
    //Size of the map
    cout<<mp.size()<<'\n';
    
    /**************Implementing Map****************/
    
    //Empty map container
    map<int,int>gquiz1;
    
    gquiz1.insert(pair<int,int>(1,40));
    gquiz1.insert(pair<int,int>(2,30));
    gquiz1.insert(pair<int,int>(3,60));
    gquiz1.insert(pair<int,int>(4,20));
    gquiz1.insert(pair<int,int>(4,50));
    gquiz1.insert(pair<int,int>(5,50));
    gquiz1.insert(pair<int,int>(6,50));
    
    //Another way of inserting value in map
    gquiz1[7] = 10;
    
    //map<int,int>::iterator itr;
    cout<<"\n The map gquiz 1 is : \n";
    cout<<"\tKEY \tELEMENT \n";

    for(auto itr = gquiz1.begin() ; itr != gquiz1.end() ; itr++){
        cout<<'\t'<< itr->first <<'\t'<< itr->second <<'\n';
    }
    
    //Assigning the elements of gquiz1 to gquiz2
    map <int,int> gquiz2(gquiz1.begin(),gquiz1.end());
    
    cout<<"\n The map gquiz 2 is : \n";
    cout<<"\tKEY \tELEMENT \n";

    for(auto itr = gquiz2.begin() ; itr != gquiz2.end() ; itr++){
        cout<<'\t'<< itr->first <<'\t'<< itr->second <<'\n';
    }
    
    //Remove all elemets with key 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    
    // Lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
         << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
         << endl;
    
    return 0;
}
