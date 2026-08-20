#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = {1 , 3 , 5 , 12 , 75 , 25}; 
int arrsize = 6;       //Original and global array 😊


/*int* deletionatfirst(int arr[] , int &size){                 //time complexity is 'O(N)'  👍
    for(int i=0; i<size; i++){
        arr[i] = arr[i+1];
    }
    size--;

    return arr;
}
int main(){
    int size = 6;

    deletionatfirst(arr , size);

    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }

    return 0;
}*/

/*int deletionatindex(int arr[] , int &size , int index){       //time complexity is 'O(n)'  👍
    int i=index-1;
    while(i<size){
        arr[i] = arr[i+1];
        i++;
    }
    size--;
}
int main(){
    int size = 6, index = 3;
    deletionatindex(arr , size , index);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/

/*int deletionatlast(int arr[] , int size){                    //time complexity is 'O(1)'  👍
    int i=0;
    while(i<size-1){
        cout<<arr[i]<<" ";
        i++;
    }
}
int main(){
    deletionatlast(arr , arrsize);
    return 0;
}*/