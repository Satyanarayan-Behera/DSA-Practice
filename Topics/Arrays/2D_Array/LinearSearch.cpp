#include <iostream>
using namespace std;

pair<int,int> linearSearch(int mat[][3] , int rows, int cols, int target){
    pair<int,int> p = {-1, -1};  
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j] == target){
                return {i , j};   //Bcz a Pair is not a container so its only contain exact two elemnts so therefore i used it.
            }
        }
    }
    return p;  //if not found then return default initialized values.
}

int main(){
    int matrix[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int rows = 3, cols =3;

    int target = 80;
    pair<int,int> p;

    p=linearSearch(matrix , rows , cols , target);

    cout<<p.first<<endl;
    cout<<p.second<<endl;
    return 0;
}