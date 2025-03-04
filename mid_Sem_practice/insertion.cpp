#include<stdio.h>
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0){
            if(arr[j]>arr[j-1]) j--;
            else{
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;

            }
            j--;
        }
    }
}
int main(){
    int arr[]={6,5,4,3,2,1,98,53,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}