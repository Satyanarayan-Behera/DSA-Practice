#include <iostream>
#include <vector>
using namespace std;


vector <int> pairsum1(vector <int> &vec , int target){   // Brute force approach O(n*n)
    int size = vec.size();
    vector <int> ans;
    for(int i=0; i <size; i++){
        for(int j =i+1; j <size; j++){
            if((vec[i] + vec[j]) == target){
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
                return ans;
            }
        }
    }
    return ans;
}
vector <int> pairsum2(vector <int> &vec , int target){   // Optimized approach O(n)
    int size = vec.size();
    vector <int> ans;
    int i=0,j=size-1;
    while(i<j){
        int ps = vec[i]+vec[j];
        if(ps >target){
            j--;
        }else if(ps < target){
            i++;
        }else{
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector <int> vec ={2,7,11,15};
    int target = 22;
    vector<int> r = pairsum2(vec,target);
    cout<<"pair is : "<<r[0]<<","<<r[1]<<endl;
    return 0;
}



