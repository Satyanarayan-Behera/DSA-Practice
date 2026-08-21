#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

/*int peak(vector<int> &vec){        //Peak index problem with linear search 👍
    for(int i=1; i< vec.size()-1; i++){
        if(vec[i-1] < vec[i] && vec[i] > vec[i+1]){
            return i+1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {3,4,5,9,10,5,2,1};
    cout<<"peak Index is : "<<peak(arr)<<endl;
    return 0;
}*/


int peak(vector<int> &nums){         //Peak index problem using binary search -> O(logn) 👍😘🥳
    int st=1, end=nums.size()-2;     //For better optimization we know that the starting and ending indices
                                     // never be an peak values , so loop starts from 1 to n-2...😒😊
    while(st <= end){
        int mid = st + (end-st)/2;
        if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1]){
            return mid+1;
        }
        if(nums[mid] < nums[mid+1]){  //mid at increasing slope
            st = mid+1;
        }else if(nums[mid] > nums[mid+1]){
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {0,3,8,9,11,9,5,2};
    cout<<"Peak index is : "<<peak(nums)<<endl;
    return 0;
}