#include <iostream>
#include <list>     //header file for all list's methods
using namespace std;

int main(){
    list<int> l;   //it's a type of doubly linked list

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);
    l.push_front(4);   //4,5,1,2,3
    
    l.erase(l.begin());
    for(int val : l){
        cout<<val<<" ";  //5,1,2,3
    }cout<<endl;

    cout<<l.front()<<endl;   //5
    cout<<l.back()<<endl;    //3

    return 0;
}