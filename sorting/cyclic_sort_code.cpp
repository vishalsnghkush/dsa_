#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,6,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cyclic sort
    int i=0;
    while(i<n){
        int correctindx=arr[i]-1;
        if(i==correctindx) i++;
        else 
        swap(arr[i],arr[correctindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}