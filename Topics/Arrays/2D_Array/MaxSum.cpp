#include <iostream>
using namespace std;

int MaxRowSum(int mat[][3] , int rows, int cols){
    int maxSum = __WINT_MIN__;
    for(int i=0; i<rows; i++){
        int currRowSum = 0;
        for(int j=0; j<cols; j++){
            currRowSum += mat[i][j];
        }
        maxSum = max(maxSum , currRowSum);
    }
    return maxSum;
}

int MaxColSum(int mat[][3] , int rows, int cols){
    int maxSum = __WINT_MIN__;
    for(int i=0; i<cols; i++){
        int currColSum = 0;
        for(int j=0; j<rows; j++){
            currColSum += mat[j][i];
        }
        maxSum = max(maxSum , currColSum);
    }
    return maxSum;
}


int main(){

    int matrix[4][3] = {{1,2,3} , {4,5,6} , {7,8,9} , {10,11,12}};
    int rows = 4, cols =3;
    
    cout<<"The Max Row Sum is : ";
    cout<<MaxRowSum(matrix , rows , cols)<<endl;
    cout<<"The Max Col Sum is : ";
    cout<<MaxColSum(matrix , rows , cols)<<endl;
    return 0;
}