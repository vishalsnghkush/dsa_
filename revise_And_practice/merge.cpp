#include<iostream>
using namespace std;
void merge(int a[],int n1,int b[],int n2,int ans[]){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
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
    if(i==n1){// a is ended here
        while(j<n2){
            ans[k]=b[j];
            k++;
            j++;
        }
    }
    if(j==n2){// b is ended here
        while(i<n1){
            ans[k]=a[i];
            k++;
            i++;
        }
    }
}
void mergesort(int arr[],int n,int ans[]){
        if (n <= 1) {
        for (int i = 0; i < n; i++) {
            ans[i] = arr[i];
        }
        return;
    }
    int mid=n/2;
    // now filling the value in two new array which are equally part
    int a[mid];
    int b[n-mid];
    // filling
    for(int i=0;i<mid;i++){
        a[i]=arr[i];
    } 
   
    for(int i=mid;i<n;i++){
        b[i-mid]=arr[i];
    
    }
    int sorted_a[mid];
    int sorted_b[n - mid];
    //magic
    mergesort(a,mid,sorted_a);
    mergesort(b,n-mid,sorted_b);
    
    // merge two;
    merge(sorted_a,mid,sorted_b,n-mid,ans);
}
int main(){
    int arr[] = {6, 4, 7, 5, 3, 2, 9, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    mergesort(arr,n,ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}