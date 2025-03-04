#include<stdio.h>
int partition(int arr[],int si,int ei){
    
    int pivoitElement=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<pivoitElement){
            count++;
        }
    }
    // swap
    int pivotIndex = count + si;
    int temp = arr[pivotIndex];  
    arr[pivotIndex] = pivoitElement;
    arr[si] = temp;
    int i=si;
    int j=ei;
    while(i<=j){
        if(arr[i]<pivoitElement) i++;
        else if(arr[j]>pivoitElement) j--;
        else{
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=arr[i];
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quick(int arr[],int si,int ei){
    if(si>ei) return;


    int pi=partition(arr,si,ei);
    quick(arr,si,pi-1);
    quick(arr,pi+1,ei);
}
int main(){
    int arr[]={6,4,3,8,5,9,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}