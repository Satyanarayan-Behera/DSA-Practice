#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"Top value is = "<<s.top()<<endl;  //top() returns top element

    // while(!s.empty()){
    //     cout<<s.top()<<" ";  //3 2 1
    //     s.pop();
    // }cout<<endl;

    stack<int> s2;
    s2.swap(s);

    cout<<"Size of s = "<<s.size()<<endl;   //after swaping the 's' is totaly empty
    cout<<"Size of s2 = "<<s2.size()<<endl;    //all elements of 's' copied to 's2'

    return 0;
}