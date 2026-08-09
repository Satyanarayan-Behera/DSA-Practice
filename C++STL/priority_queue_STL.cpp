#include<iostream>
#include<queue>
using namespace std;
int main(){

    // priority_queue<int> q;
    priority_queue<int, vector<int> ,greater<int>> q;
    q.push(3);
    q.push(10);
    q.push(4);
    q.push(5);

    cout<<"The size of this queue is = "<<q.size()<<endl;
    cout<<"Priority Queue's elements are : ";
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }cout<<"  In reverse order"<<endl;

    return 0;
}