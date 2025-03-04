#include<stdio.h>
void merge(int a[],int n,int b[],int m,int ans[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            ans[k]=a[i];
            i++;
        }
        else{
            ans[k]=b[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while(j<m){
            ans[k]=b[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<n){
            ans[k]=a[i];
            i++;
            k++;
        }
    }
}
void merge_sort(int arr[],int n){
    if(n<=1) return;
    int mid=n/2;
    int a[mid];
    int b[n-mid];
    for(int i=0;i<mid;i++){
        a[i]=arr[i];
    }
    for(int i=mid;i<n;i++){
        b[i-mid]=arr[i];
    }
    merge_sort(a,mid);
    merge_sort(b,n-mid);
    int ans[n];
    merge(a,mid,b,n-mid,ans);
 // Manually copy elements from ans back to arr
 for (int i = 0; i < n; i++) {
    arr[i] = ans[i];
}
}
int main(){
    int arr[]={7,4,5,3,2,5,43};
    int n=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}