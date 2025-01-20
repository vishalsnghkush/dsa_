// bubble sort me loop star triangle jaise chata hai
// aur uske if j and j+1 i.e (j>j+1) then swap kr do...
// 64, 34, 25, 12, 22, 11, 90
// in first itteration 
// 34 64 swap hoga then 
// 34 64 25 12 22 11 90
// again 
// 64 and 25 swap;then 34 25 64 ... so on till the 64 reached at the second largest element
// second largest because the 64<90 so last me  swapping nahi chalega 
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={ 64, 34, 25, 12, 22, 11, 90 };
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"printing"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}