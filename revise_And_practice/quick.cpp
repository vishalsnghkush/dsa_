#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivoit=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivoit) count++;
    }
    // intdex
    int index=si+count;
    swap(arr[index],arr[si]);
    // now changing their position
    int i=si,j=ei;
    while(i<index && j>index){
        if(arr[i]<=pivoit) i++;
        if(arr[j]>pivoit) j--;
        else if(arr[i]>pivoit && arr[j]<=pivoit){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return index;
}
void quick(int arr[],int si,int ei){
    if(si>=ei) return;
    int part=partition(arr,si,ei);
    // 
    quick(arr,si,part-1);
    quick(arr,part+1,ei);

}
int main(){
    int arr[]={4,2,6,4,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}