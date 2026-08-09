#include <iostream>
#include <vector>  //standard VECTOR library for all vector's methods
using namespace std;

//these are the methods of vectors which take o(1)-TC  ------>
/*int main(){
    vector<int> vec;    //it's a type of dynamic array
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.pop_back();

    vec.emplace_back(60);

    cout<<"Vector size is : "<<vec.size()<<endl;
    cout<<"Vector capacity is : "<<vec.capacity()<<endl;
    
    
    cout<<"Value at idx 2 : "<<vec[2]<<endl;
    cout<<"Value at idx 2 : "<<vec.at(2)<<endl;
    
    cout<<"Vector front is : "<<vec.front()<<" And Vector back is : "<<vec.back()<<endl;
    
    return 0;
}*/
  
    

//these are the methods of vectors which take o(n)-TC ----->
/*int main(){
    vector<int> vec = {1,2,3,4,5};
    for(int val : vec){
        cout<<val<<" ";
    } cout<<endl;

    cout<<"Vector size is : "<<vec.size()<<endl;
    cout<<"Vector capacity is : "<<vec.capacity()<<endl;
    cout<<"After insertion in vector : ";
    vec.insert(vec.begin()+2 , 100);     //insert 100 at idx 2
    for(int val : vec){
        cout<<val<<" ";
    } cout<<endl;
    
    vec.erase(vec.begin() + 1);   //erase idx 1 value
    
    cout<<"After erasing at a idx : ";
    for(int val : vec){
        cout<<val<<" ";
    } cout<<endl;

    vec.clear();     //clear all elements in an vector
    cout<<"Is Vector EMPTY : "<<vec.empty()<<endl;

    return 0;
}*/


//Iterators in vectors ----->
/*int main(){
    vector<int> vec = {1,2,3,4,5};

    //create vector iterator
    vector<int>::iterator itr;
    for(itr=vec.begin() ; itr != vec.end(); itr++){
        cout<<*(itr)<<" ";       //here '*' is used for retriving actual value from 'itr', bcz 'itr' itself stores only idx number not data values.
    }cout<<endl;

    //for simplicity we use 'auto' keyword for declare the iterator datatype
    cout<<"Print vector forwardly using 'auto' keyword : ";
    for(auto itr=vec.begin() ; itr != vec.end(); itr++){
        cout<<*(itr)<<" ";  
    }cout<<endl;

    //To reversely traversal we use reverse iterator
    //for simplicity we use 'auto' keyword for declare the iterator datatype
    cout<<"Print vector reversly using 'auto' keyword : ";
    for(auto itr=vec.rbegin() ; itr != vec.rend(); itr++){
        cout<<*(itr)<<" ";  
    }cout<<endl;

    return 0;
}*/










