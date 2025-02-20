#include<stdio.h>
int partition(int arr[],int si,int ei){
    int pivot_element=arr[si];
    int count=0;
    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] < pivot_element) {
            count++;
        }
    }
    int pivoit_indx=si+count;
    // swap
    int temp=arr[si];
    arr[si]=arr[pivoit_indx];
    arr[pivoit_indx]=temp;

    int i=si,j=ei;
    while(i<pivoit_indx && j>pivoit_indx){
        if(arr[i]<pivot_element) i++;
        else if(arr[j]>=pivot_element) j--;
        else{
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
            i++;
        }
    }
    return pivoit_indx;
}
void qsort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);

    qsort(arr,si,pi-1);
    qsort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,4,6,7,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}