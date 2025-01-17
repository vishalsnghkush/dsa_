#include<iostream>
using namespace std;
void print(int arr[],int size,int indx){
    if(indx==size) return;
    cout<<arr[indx]<<" ";
    print(arr,size,indx+1);
}
int main(){
    int arr[]={2,3,4,5,6,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size,0);
    return 0;
}