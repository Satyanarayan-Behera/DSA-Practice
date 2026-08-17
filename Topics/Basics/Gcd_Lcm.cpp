#include <iostream>
using namespace std;

// int gcd(int a , int b){    // TC :- O(min(a,b))
//     int ans = 1;
//     for(int i=1; i < min(a,b); i++){
//         if(a % i== 0 && b % i==0){
//             ans = i;
//         }
//     }
//     return ans;
// }

// int gcd(int a , int b){
//     while(a > 0 && b > 0){
//         if(a > b) a= a % b;
//         else b = b % a;
//     }
//     if(a==0) return b;
//     return a;
// }

//Euclid's Algorithm, GCD - Greatest Common Divisor
int gcdRec(int a , int b){  //Recursive method for GCD
    if(b == 0) return a;
    return gcdRec(b , a % b);
}

//Find the LCM - Least Common Multiple
int lcm(int a , int b){
    int gcdval = gcdRec(a , b);
    return (a * b) / gcdval;
}
int main(){
    cout<<gcdRec(20 , 28)<<endl;
    cout<<lcm(20 ,28)<<endl;
    return 0;
}