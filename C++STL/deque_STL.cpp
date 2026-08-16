#include <iostream>
#include <deque>  //header file for all deque's methods
using namespace std;

int main(){
    deque<int> d;     //it's a type of dynamic array
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(5);
    d.push_front(4);   //4,5,1,2,3

    d.erase(d.begin() + 1);
    for(int val : d){
        cout<<val<<" ";  //4,1,2,3
    }cout<<endl;

    cout<<d.size()<<endl;   //4

    return 0;
}