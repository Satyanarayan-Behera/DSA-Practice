#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
 
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(1);
    s.insert(2);

    cout<<"Set size = "<<s.size()<<endl;
    for(auto val : s){
        cout<<val<<" ";
    }cout<<endl;

    cout<<"Lowerbound = "<<*(s.lower_bound(4))<<endl;
    cout<<"upperbound = "<<*(s.upper_bound(4))<<endl;

    return 0;
}