//Listen, there is so many messed-up codes, so use this as ur requirments. 😂
//Plz, Correct it before execution... 

#include <iostream>
#include <algorithm>
using namespace std;
int arr[] = {1 , 3 , 5 , 12 , 75 , 25}; 
int arrsize = 6;       //Original and global array 😊

void insertatfirst(int arr[] ,int &arrsize, int value){    //time complexity is 'O(n)' 👍
    for(int i=arrsize; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = value;
}
void insertatlast(int arr[] , int &arrsize , int value){       //time complexity is 'O(1)' 👍
    arr[++arrsize] = value;
    // for(int i=0; i<=arrsize; i++){
    //     cout<<" "<<arr[i];
    // }
}
void insertatindex(int arr[] , int &arrsize){                //time complexity is 'O(N)' 👍
    int value , index;
    cout<<"\nEnter insertion element :- ";
    cin>>value;
    cout<<"\nEnter insertion index :- ";
    cin>>index;
    for(int i=++arrsize ; i>=index ; i--){
        arr[i] = arr[i-1];
    }
    arr[index-1] = value;

}
int main(){

    cout<<"Before insertion :- ";
    for(int i=0; i<arrsize; i++){
        cout<<" "<<arr[i];
    }
    // insertatfirst(arr ,arrsize , 2);
    // insertatlast(arr ,arrsize , 2);
    
    cout<<"\nAfter insertion :- ";
    for(int i=0; i<=arrsize; i++){
        cout<<" "<<arr[i];
    }
    
    // insertatindex(arr , arrsize);
    
    // cout<<"\nAfter insertion at index :- ";
    // for(int i=0; i<=arrsize; i++){
    //     cout<<" "<<arr[i];
    // }
    
    return 0;
}