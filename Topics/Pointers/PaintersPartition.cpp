#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


//Painter's partition problem or like- Book Allocation problem  ,, time complexity '{ O(log(sum) * n) }' 👍😊
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
}