#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

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

/*int Binarysearch(vector<int> arr , int tar){    //two pointer approach👍
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
}*/


/*int rsa (int arr[] , int n ,int target){         //Rotated Sorted array problem 👍😘🥳
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
}*/


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


/*int peak(vector<int> &nums){         //Peak index problem using binary search -> O(logn) 👍😘🥳
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
}*/


/*int singleElement (vector<int> &nums){       //Single Element search , 0(logn) 🥳👍

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
}*/


/*//Painter's partition problem or like- Book Allocation problem  ,, time complexity '{ O(log(sum) * n) }' 👍😊
bool isvalid(vector<int> &arr, int n, int person,int mid){
    int painters = 1, time=0;
    for(int i=0; i<n; i++){
        if(time + arr[i] <= mid){
            time= time + arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }
    if(painters <= person){
        return true;
    }else{
        return false;
    }
}

int minimumtime(vector<int> &arr, int n,int person){
    int max_val=__WINT_MIN__, sum=0;
    int ans=0;
    for(int i=0; i<n; i++){
        sum += arr[i];  //max time required
        max_val = max(max_val, arr[i]);  //max time required for one person if 'arr_size == no. of person'
    }
    int st = max_val , end =sum;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isvalid(arr,n,person,mid)){    //then find possible minimum in left half
            ans = mid;
            end = mid-1;
        }else{           //then find possible minimum in right half     
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={40,30,10,20};
    int person = 2, n = 4;
    cout<<"Minimum possible time required for painting is : "<<minimumtime(arr,n,person)<<endl;
    return 0;
}*/


/*//Aggresive Cows Problem    total time complexity is 'O(log(range) * N)'
bool ispossible(vector<int> &arr, int n, int c, int mid){      //O(N)
    int cows=1, stall=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-stall >= mid){
            cows++;
            stall = arr[i];
        }
        if(cows==c){
            return true;
        }
    }
    return false;
}

int aggresivecow(vector<int> &arr, int n, int c){
    sort(arr.begin() , arr.end());
    int st=1,end= arr[n-1]-arr[0],  ans=-1;
    while(st <= end){    //O(log(range))
        int mid = st + (end-st)/2;
        if(ispossible(arr,n,c,mid)){      //if mid == possible,then find the largest possible distance in right half
            ans = mid;
            st= mid+1;
        }else{                //if mid != possible then find in left half 
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,8,4,9};
    int n=5, c=3;     //n=arr size , c= no. of cows
    cout<<"The largest possible minimum distance should be : "<<aggresivecow(arr,n,c);
    return 0;
}*/


/*//Approach-2 (Single pass) <-- 'Dutch National Flag Algo' -TC-O(n) , SC-O(n) 👍🥳
//Redirect to "Pointers.cpp" file.  <--I use 3-pointer approach
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
}*/










