//  sort
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    // priting
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
