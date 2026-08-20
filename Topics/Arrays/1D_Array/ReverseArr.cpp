#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = {1 , 3 , 5 , 12 , 75 , 25}; 
int arrsize = 6;       //Original and global array 😊

int reversearray(int arr[] , int arrsize){                 //time complexity is 'O(n)' 👍
    int first = 0 , last = arrsize-1;

    for(int i=0; i< arrsize/2; i++){         //first approach of swapping using 'for' loop , O(log(n))
        swap(arr[first] , arr[last]);
        first++;
        last--;
    }
    // while(first < last){                     //second approach of swapping using 'while' loop , O(n)
    //     swap(arr[first] , arr[last]);
    //     first++;
    //     last--;
    // } 
}

int reversearr(int arr[] , int arrsize){       //third approch of reversing an array with , O(log(n))
    cout<<"This Function is called for reverse an array\n";
    int start=0, end=arrsize-1;
    for(int _=start; _<end; _=arrsize/2){
        swap(arr[start] , arr[end]);
        start++; end--;
    }
}

int main(){
    reversearray(arr , arrsize);
    // reversearr(arr, arrsize);
    
    for(int i=0; i<arrsize; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}