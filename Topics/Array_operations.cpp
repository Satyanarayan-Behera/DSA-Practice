#include <iostream>
#include <algorithm>
using namespace std;
int garr[] = {1 , 3 , 5 , 12 , 75 , 25}; 
int arrsize = 6;       //Original and global array 😊
/*int main(){                          //👍
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
}*/

/*int linearsearch(int arr[] , int size , int target){       //time complexity is 'O(n)' 👍
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i+1;
        }
        return -1;
    }
}
int main(){
    int arr[] = {5 , 12 , 75 , 166 , 25 , 1};
    int size = sizeof(arr);
    int target = 89;
    cout<<"Element found at index :- "<<linearsearch(arr , size , target)<<endl; 

    return 0;
}*/

/*int reversearray(int arr[] , int arrsize){                 //time complexity is 'O(n)' 👍
    int first = 0 , last = arrsize-1;

    for(int i=0; i< arrsize/2; i++){         //first approach of swapping using 'for' loop , O(log(n))
        swap(arr[first] , arr[last]);
        first++;
        last--;
    }
    // while(first < last){                     //second approach of swapping using 'while' loop , O(n)
    //     swap(arr[first] , arr[last]);
    //     first++;
    //     last--;
    // } 
}

int reversearr(int arr[] , int arrsize){       //third approch of reversing an array with , O(log(n))
    cout<<"This Function is called for reverse an array\n";
    int start=0, end=arrsize-1;
    for(int _=start; _<end; _=arrsize/2){
        swap(arr[start] , arr[end]);
        start++; end--;
    }
}

int main(){
    // reversearray(arr , arrsize);
    reversearr(arr, arrsize);
    for(int i=0; i<arrsize; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}*/

/*void insertatfirst(int arr[] ,int &arrsize, int value){    //time complexity is 'O(n)' 👍
    for(int i=arrsize; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = value;
}
void insertatlast(int arr[] , int &arrsize , int value){       //time complexity is 'O(1)' 👍
    arr[++arrsize] = value;
    // for(int i=0; i<=arrsize; i++){
    //     cout<<" "<<arr[i];
    // }
}
void insertatindex(int arr[] , int &arrsize){                //time complexity is 'O(N)' 👍
    int value , index;
    cout<<"\nEnter insertion element :- ";
    cin>>value;
    cout<<"\nEnter insertion index :- ";
    cin>>index;
    for(int i=++arrsize ; i>=index ; i--){
        arr[i] = arr[i-1];
    }
    arr[index-1] = value;

}
int main(){
    int arrsize = 4;

    cout<<"Before insertion :- ";
    for(int i=0; i<arrsize; i++){
        cout<<" "<<arr[i];
    }
    insertatfirst(arr ,arrsize , 2);
    insertatlast(arr ,arrsize , 2);
    
    cout<<"\nAfter insertion :- ";
    for(int i=0; i<=arrsize; i++){
        cout<<" "<<arr[i];
    }
    
    insertatindex(arr , arrsize);
    
    cout<<"\nAfter insertion at index :- ";
    for(int i=0; i<=arrsize; i++){
        cout<<" "<<arr[i];
    }
    
    return 0;
}*/

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
    int size = 6;
    deletionatlast(arr , size);
    return 0;
}*/

/*int swapminmax(int arr[] , int size){
    int smallest = __INT_MAX__;
    int largest = __WINT_MIN__;
    for(int i=0; i <size; i++){
        if(arr[i] < smallest){
            smallest = i;
        }if(arr[i] > largest){
            largest = i;
        }
    }
    cout<<"largest : "<<largest+1<<"  smallest : "<<smallest+1<<endl;
    swap(arr[smallest] , arr[largest]);
    for(int i=0; i <size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size=5;
    swapminmax(arr, size);
    return 0;
}*/


/*int findunique(int arr[], int size){
    cout<<"Unique values are : ";
    for(int i=0 ; i <size; i++){
        bool found=false;
        for(int j=0; j <size; j++){
            if(i==j) continue;       //same index value skips from compiring
            if(arr[i] == arr[j]){
                found=true;
                break;
            }
        }
        if(!found){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[] = {1,2,3,5,7,5,3,9,1};
    int size = 9;
    findunique(arr,size);
    return 0;
}*/


/*void selectionsort(int arr[] , int n){
    for(int i=0; i<n-1; i++){      // Assuming sorted part
        int smallestidx = i;
        for(int j=i+1; j<n; j++){     //Assuming unsorted part
            if(arr[j] < arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i], arr[smallestidx]);
    }
}
int main(){
    int arr[] = {4,1,5,2,3};
    int n =5;
    selectionsort(arr,n);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}*/


/*void insertionsort(int arr[], int size){
    for(int i=1; i<size; i++){
        int current = arr[i];
        int previous = i-1;
        while(previous >= 0 && arr[previous] > current){
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous+1] = current;
    }
}

int main(){
    int arr[] = {4,1,5,2,3};
    int size = 5;
    insertionsort(arr, size);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}*/


//sort array with 0s, 1s and 2s    time complexity 'O(n)'
//Approach-1 (Double pass)
int main(){
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    int size = 10;
    int c0=0,c1=0,c2=0;
    for(int i=0; i<size; i++){
        if(arr[i] == 0) c0++;
        else if(arr[i] == 1) c1++;
        else c2++;
    }
    int idx = 0;
    for(int i=0; i<c0; i++){
        arr[idx++] = 0;
    }
    for(int i=0; i<c1; i++){
        arr[idx++] = 1;
    }
    for(int i=0; i<c2; i++){
        arr[idx++] = 2;
    }
    
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
} 
//Approach-2 (Single pass) <-- 'Dutch National Flag Algo' -TC-O(n) , SC-O(n)
//Redirect to "Pointers.cpp" file.











