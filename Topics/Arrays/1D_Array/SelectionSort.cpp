#include <iostream>
#include <algorithm>
using namespace std;

void selectionsort(int arr[] , int n){
    for(int i=0; i<n-1; i++){      // Assuming sorted part
        int smallestidx = i;
        for(int j=i+1; j<n; j++){     //Assuming unsorted part
            if(arr[j] < arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i], arr[smallestidx]);
    }
}
int main(){
    int arr[] = {4,1,5,2,3};
    int n =5;
    selectionsort(arr,n);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}