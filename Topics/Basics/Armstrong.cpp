#include <iostream>
#include <cmath>
using namespace std;

bool isArmstring(int n){     //TC :- O(log 10 N)
    int sumofdigits = 0, digits = 0;
    int original = n;
    while(n > 0){
        digits++;   //count how many digits in a number
        n /= 10;
    }

    n = original;  //reset to original to make second loop ready, bcz in first loop 'n' totally destroyed

    while (n > 0){
        int rem = n % 10;
        sumofdigits += round(pow(rem , digits));
        n /= 10;
    }

    if(sumofdigits == original) return true;
    return false;
}

int main(){
    cout<<isArmstring(153)<<endl;
    return 0;
}
