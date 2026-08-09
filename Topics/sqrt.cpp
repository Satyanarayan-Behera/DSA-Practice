#include <iostream>
#include <math.h>
using namespace std;

int squareroot(int x){
    if(x==0 || x==1){
        return x;
    }
    int st = 1, end = x , ans=0;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(mid == x / mid){    //instead of directly squaring the mid, it maybe overflow through standard 'int' datatype,so i use this
            return mid;
        }else if(mid > x / mid){   //<----same logic here
            end = mid-1;
        }else{
            st = mid+1;
            ans = mid; //if the sqrt value is closest to 'x' then store it in the ans; 
        }
    }
    return ans;
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Square root is : "<<squareroot(x);
    return 0;
}