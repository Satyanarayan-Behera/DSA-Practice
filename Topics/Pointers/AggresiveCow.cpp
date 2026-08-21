#include<iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

//Aggresive Cows Problem    total time complexity is 'O(log(range) * N)'
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
}