#include <iostream>
using namespace std;
int DtB(int decNum){ // decimal to binary convertion ( int decimal )
    int ans = 0;
    int pow = 1;
    while (decNum > 0){
        int rem = decNum % 2; // stores remainder
        decNum = decNum / 2;  // quoceint
        ans = ans + (rem * pow);
        pow *= 10; // increament position of digit
    }
    return ans;
}


int BtD(int biNum){  //BtD= binary to decimal
    int ans=0,pow=1;
    while(biNum > 0){
        int rem = biNum % 10;
        biNum /= 10;
        ans = ans + (rem*pow);
        pow *= 2;
    }
    return ans;
}

int main(){
    int decNum , biNum;
    printf("Enter Decimal Number : ");
    cin>>decNum;
    printf("The Binary value is : %d\n" , DtB(decNum));
    printf("Enter Binary Number : ");
    cin>>biNum;
    printf("Again the decimal value is : %d\n" , BtD(biNum));
    return 0;
}