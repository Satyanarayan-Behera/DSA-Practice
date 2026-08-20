#include <iostream>
#include <algorithm>
using namespace std;

//sort array with 0s, 1s and 2s    time complexity 'O(n)'
//Approach-1 (Double pass)
int main(){
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    int size = 10;
    int c0=0,c1=0,c2=0;
    for(int i=0; i<size; i++){
        if(arr[i] == 0) c0++;
        else if(arr[i] == 1) c1++;
        else c2++;
    }
    int idx = 0;
    for(int i=0; i<c0; i++){
        arr[idx++] = 0;
    }
    for(int i=0; i<c1; i++){
        arr[idx++] = 1;
    }
    for(int i=0; i<c2; i++){
        arr[idx++] = 2;
    }
    
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
} 
//Approach-2 (Single pass) <-- 'Dutch National Flag Algo' -TC-O(n) , SC-O(n)
//Redirect to "Pointers.cpp" file.
