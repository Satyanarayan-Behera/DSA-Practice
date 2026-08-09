#include <iostream>
#include <vector>
using namespace std;

// vectors are declared in different ways :-
// 1. vector <datatype> vec_name;   <--- empty vector
// 2. vector <datatype> vec_name = {1 , 2 ,3};   <---initialized vector
// 3. vector <datatype> vec_name (3 , 0);    <---initialized with size and elements
//                              \\size of vector=3  ,, \\elements stored=0
/*int main(){
    vector <int> vec = {1, 2, 3};
    
    for(int val : vec){   //foreach loop
        cout<<val<<endl;
    }

    return 0;
}*/

/*int main(){        //vector's methods...
    vector <int> vec;
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(12);
    vec.push_back(75);
    vec.push_back(166);
    cout<<"vectoe size = "<<vec.size()<<endl; //size == 5 but starting from 0 to 4;
    vec.pop_back();
    cout<<"vectoe size after pop = "<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(2);
    return 0;
}*/

/*int main(){          //Linear search...
    
    vector <int> num = {1, 3, 5, 12, 75,};
    int target = 166;
    for(int val : num){
        if(target == val){
            cout<<"found !\n";
            break; 
        }else{
            cout<<"Not Found !\n";
            break;
        }
    } 

    return 0;
}*/

/*int main(){           //maximum sub-arrays
    int arr[5] = { 1, 2, 3, 4, 5,};
    int n = 5;
    int maxsum = __WINT_MIN__;
    for(int st=0; st<n; st++){
        int currsum=0;
        for(int end=st; end<n; end++){
            currsum += arr[end];
            maxsum = max(currsum , maxsum);
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;    
    }
    cout<<"Maximum subarray sum is : "<<maxsum<<endl;
    return 0;
}*/

/*vector <int> pairsum1(vector <int> &vec , int target){   // Brute force approach O(n*n)
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
}*/








