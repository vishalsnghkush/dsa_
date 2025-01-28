#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // priting
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// is me bubble jaise sort hota jayega 
// like the if soap is dissolved then it formed bubble and go
// form the up to up...............//
// so on ........