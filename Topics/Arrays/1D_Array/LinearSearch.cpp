#include <iostream>
#include <algorithm>
using namespace std;

int linearsearch(int arr[] , int size , int target){       //time complexity is 'O(n)' 👍
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i+1;
        }
        return -1;
    }
}
int main(){
    int arr[] = {5 , 12 , 75 , 166 , 25 , 1};
    int size = sizeof(arr);
    int target = 89;
    cout<<"Element found at index :- "<<linearsearch(arr , size , target)<<endl; 

    return 0;
}