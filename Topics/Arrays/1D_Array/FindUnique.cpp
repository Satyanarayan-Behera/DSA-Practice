#include <iostream>
#include <algorithm>
using namespace std;


int findunique(int arr[], int size){
    cout<<"Unique values are : ";
    for(int i=0 ; i <size; i++){
        bool found=false;
        for(int j=0; j <size; j++){
            if(i==j) continue;       //same index value skips from compiring
            if(arr[i] == arr[j]){
                found=true;
                break;
            }
        }
        if(!found){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[] = {1,2,3,5,7,5,3,9,1};
    int size = 9;
    findunique(arr,size);
    return 0;
}