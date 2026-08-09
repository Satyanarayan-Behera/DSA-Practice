#include <iostream>
//there are no header file for pair datatype 
using namespace std;

int main(){

    pair<int, int> p ={1,2};    //single paired value
    //in pair datatype , it's only stores exact two pair elements
    
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<int, pair<int,char>> p1 ={7,{5 , 's'}};    //doubly paired value
    //but in here pair datatype , it's stores more than two 'pair' elements

    cout<<p1.first<<endl;
    cout<<p1.second.first<<endl;
    cout<<p1.second.second<<endl;


    return 0;
}
