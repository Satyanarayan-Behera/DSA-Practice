#include <iostream>
#include <algorithm>
using namespace std;

int swapminmax(int arr[] , int size){
    int smallest = __INT_MAX__;
    int largest = __WINT_MIN__;
    for(int i=0; i <size; i++){
        if(arr[i] < smallest){
            smallest = i;
        }if(arr[i] > largest){
            largest = i;
        }
    }
    cout<<"largest : "<<largest+1<<"  smallest : "<<smallest+1<<endl;
    swap(arr[smallest] , arr[largest]);
    for(int i=0; i <size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size=5;
    swapminmax(arr, size);
    return 0;
}