#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={7,5,4,3,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]>arr[j]){
                index=j;
            }
            
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}