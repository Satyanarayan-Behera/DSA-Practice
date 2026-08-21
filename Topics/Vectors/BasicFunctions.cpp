#include <iostream>
#include <vector>
using namespace std;

// vectors are declared in different ways :-
// 1. vector <datatype> vec_name;   <--- empty vector
// 2. vector <datatype> vec_name = {1 , 2 ,3};   <---initialized vector
// 3. vector <datatype> vec_name (3 , 0);    <---initialized with size and elements
//                              \\size of vector=3  ,, \\elements stored=0
/*int main(){
    vector <int> vec = {1, 2, 3};
    
    for(int val : vec){   //foreach loop
        cout<<val<<endl;
    }

    return 0;
}*/


int main(){        //vector's methods...
    vector <int> vec;
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(12);
    vec.push_back(75);
    vec.push_back(166);
    cout<<"vectoe size = "<<vec.size()<<endl; //size == 5 but starting from 0 to 4;
    vec.pop_back();
    cout<<"vectoe size after pop = "<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(2);
    return 0;
}