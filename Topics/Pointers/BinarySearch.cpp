#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

//Basics 
/*int main(){
    int arr[]={10,20,30,40};
    int* ptr = arr;
    cout<<*(ptr+1)<<endl;  //20
    cout<<*(ptr+2)<<endl;  //30
    cout<<*(ptr+3)<<endl;  //40
    ptr++;                 //+4byte
    cout<<*ptr<<endl;      //20
    return 0;
}*/

int Binarysearch(vector<int> arr , int tar){    //two pointer approach👍
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
        int mid= (st+end)/2;
        if(arr[mid] < tar){
            st=mid+1;
        }else if(arr[mid] > tar){
            end = mid-1;
        }else {
            return mid+1;
        }
    }
    return -1;
}
int main(){  //Binary Search, TC=O(logn)
    vector<int> arr1 = {-1,0,3,4,5,9,12};  //Odd array
    vector<int> arr2 = {-1,0,3,5,9,12};    //Even array
    int tar = 12;   //possition 6
    cout<<Binarysearch(arr1,tar)<<endl;
    return 0;
}