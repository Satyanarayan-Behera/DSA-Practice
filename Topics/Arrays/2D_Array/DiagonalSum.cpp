#include <iostream>
using namespace std;

//Approach 1
int diagonalSum1(int mat[][4] , int n){  //O(n^2)
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                sum += mat[i][j];   //Primary Diagonal
            }else if(j == n-1-i){
                sum += mat[i][j];   //Secondary Diagonal
            }
        }
    }
    return sum;
}


//Approach 2
int diagonalSum2(int mat[][3] , int n){   //O(n)
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];    //Primary Diagonal
        sum += mat[i][n-i-1];   //Secondary Diagonal
    }

    if(n % 2 == 1){
        sum -= mat[n/2][n/2];
    }

    return sum;
}


int main(){
    //2D Even Square Array
    int matrix1[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n1 = 4;
    
    cout<<diagonalSum1(matrix1, n1)<<endl;
    
    //2D odd Square Array
    int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n2 = 3;
    
    cout<<diagonalSum2(matrix2, n2)<<endl;

    return 0;
}
