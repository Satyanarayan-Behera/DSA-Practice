#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//Method-1 :- Normal Brute Intution for prime checking
/*bool isprime(int n){
    if(n <=1 ) return false;
    for(int i=2; i <= sqrt(n); i++){  //here we put a condi "i <= sqrt(n)" , bcz if a no. is divisible by it's sqrt, then its not a prime and we stops checking after this
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(isprime(n)) cout<<n<<" is a Prime Number."<<endl;
    else cout<<n<<" is Not a Prime Number."<<endl;

    return 0;
}*/


/*
//Method-2 :- Advanced logic (Sieve of Eratosthenes Algorithm)
//Leetcode-204 -Count prime numbers between 2 to n
int countprime(int n){
    if(n <= 2) return 0;
    int count = 0;
    vector<bool> isprime(n , true);
    for(int i=2; i<n; i++){
        if(isprime[i]){
            count++;

            for(int j= i*2; j<n; j=j+i){
                isprime[j] = false;
            }
        }
    }
    return count;
}

int main(){
    //checking how many prime numbers between a given range
    int n;   //here n denotes for range between 2 to n
    cout<<"Enter a number range : ";
    cin>>n;
    
    cout<<"The total no. of prime numbers are : "<<countprime(n)<<endl;

    return 0;
}*/





