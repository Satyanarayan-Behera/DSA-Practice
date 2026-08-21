#include <iostream>
#include <vector>
using namespace std;


int main(){           //maximum sub-arrays
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
}