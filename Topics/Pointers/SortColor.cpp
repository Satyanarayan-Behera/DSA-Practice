#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;



//Approach-2 (Single pass) <-- 'Dutch National Flag Algo' -TC-O(n) , SC-O(n) 👍🥳
//Redirect to "<Pointers>" file.  <--I use 3-pointer approach
void sortcolor(vector<int> &nums){
    int n = nums.size();
    int low=0, mid=0, high=n-1;
    while(mid <= high){
        if(nums[mid] == 0){    //0s condition
            swap(nums[mid] , nums[low]);
            low++; mid++;
        }else if(nums[mid] == 1){  //1s condition
            mid++;
        }else{   //2s condition
            swap(nums[mid] , nums[high]);
            high--;
        }
    }
}
int main(){
    vector<int> nums = {2,0,2,1,1,0,2,0,0,1};
    sortcolor(nums);
    for(int val : nums){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
