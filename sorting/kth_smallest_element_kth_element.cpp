#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int count=0;
    int pivoitElement=arr[si];
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivoitElement) count++;
    }
    // then after 
    int pivoit_indx=count+si;
    swap(arr[si],arr[pivoit_indx]);
    int i=si;
    int j=ei;
    while(i<pivoit_indx && j>pivoit_indx){
        if(arr[i]<=pivoitElement) i++;
        if(arr[j]>pivoitElement) j--;
        else if(arr[i]>pivoitElement && arr[j]<=pivoitElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivoit_indx;
}
int quickselect(int arr[],int si,int ei,int k){
    int pi=partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k){ // this means partion element is less then we have to go to left side only
        return quickselect(arr,pi+1,ei,k); 
    }
    else return quickselect(arr,si,pi-1,k);

}
int main(){
    // bubble se k*n time complexity
    // merge sort se n*logn
    // quick sort se n..average case ..wrost case n^2;
    int arr[]={5,1,8,2,7,6,3,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
   cout<< quickselect(arr,0,n-1,k);
    return 0;
}