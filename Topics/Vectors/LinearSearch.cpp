#include <iostream>
#include <vector>
using namespace std;


int main(){          //Linear search...
    
    vector <int> num = {1, 3, 5, 12, 75,};
    int target = 166;
    for(int val : num){
        if(target == val){
            cout<<"found !\n";
            break; 
        }else{
            cout<<"Not Found !\n";
            break;
        }
    } 

    return 0;
}