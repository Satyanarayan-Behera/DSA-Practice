#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int rsa (int arr[] , int n ,int target){         //Rotated Sorted array problem 👍😘🥳
    int st=0, end=n-1;
    while(st <= end){
        int mid = st + (end-st) / 2;
        if(arr[mid] == target){
            return mid+1;
        }
        if(arr[st] <= arr[mid]){  //left sorted
            if(arr[st] <= target && target <= arr[mid]){        //go to left half
                end = mid-1;
            }else{                  //go to right half
                st = mid+1;
            }
        }else{                    //Right sorted
            if(arr[mid] <= target && target <= arr[end]){    //go to right half
                st = mid+1;
            }else{          //go to left half
                end = mid-1;
            }
        }
    }
    return -1;
}


int main(){
    int arr[] = {3,4,5,6,7,0,1,2};
    int n = 8;
    int target = 3;
    cout<<"Tagret found at index : "<<rsa(arr,n,target)<<endl;
    return 0;
}