#include <iostream>
#include <algorithm>
using namespace std;


void insertionsort(int arr[], int size){
    for(int i=1; i<size; i++){
        int current = arr[i];
        int previous = i-1;
        while(previous >= 0 && arr[previous] > current){
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous+1] = current;
    }
}

int main(){
    int arr[] = {4,1,5,2,3};
    int size = 5;
    insertionsort(arr, size);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}