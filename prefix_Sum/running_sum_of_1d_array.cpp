#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,1,2,3,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int prefix_sum[n];
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix_sum[i]=arr[i]+prefix_sum[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<prefix_sum[i]<<" ";
    }
    return 0;
}