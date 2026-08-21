
#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


int singleElement (vector<int> &nums){       //Single Element search , 0(logn) 🥳👍

    // Handle arrays with a single element
    int n = nums.size(); 
    if (n == 1) return nums[0];
    // Check boundary elements explicitly to avoid out-of-bound errors
    if (nums[0] != nums[1]) return nums[0];
    if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

    int st=1, end=n-2;
    while(st<=end){
        int mid= st + (end-st)/2;
        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }
        if(mid %2 == 0){  //if mid is even , then the two halfs having even elements 
            if(nums[mid-1] == nums[mid]){       // then the left half having single element
                end= mid-1;
            }else{                              //then  the right half having single element
                st = mid+1;
            }
        }else{           //if mid is odd , then the two halfs having odd elements
            if(nums[mid-1] == nums[mid]){       // then the left half having single element
                st = mid+1;
            }else{                              //then  the right half having single element
                end= mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3,3,7,7,10,11,11};
    cout<<"Single element is : "<<singleElement(nums)<<endl;
    return 0;
}