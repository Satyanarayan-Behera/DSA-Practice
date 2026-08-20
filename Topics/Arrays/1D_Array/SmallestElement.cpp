#include <iostream>
#include <algorithm>
using namespace std;
int garr[] = {1 , 3 , 5 , 12 , 75 , 25}; 
int arrsize = 6;       //Original and global array 😊
int main(){                          //👍
    int arr[5];
    cout<<"Enter elements :- ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    } 
    cout<<"Array elements are :- ";
    for(int i=0; i<5; i++){
        cout<<" "<<arr[i];
    }

    int smallest =__INT_MAX__;
    int in;
    for(int i=0; i<5; i++){
        if(arr[i] < smallest){   //other method for comparing two values :-- " min(value1 , value2) " or " max(value1 , value2) ".
            smallest = arr[i];
            in = i+1;
        }
    }

    cout<<"\nSmallest value in an array is :- "<<smallest<<" At index: "<<in<<endl;

    return 0;
}