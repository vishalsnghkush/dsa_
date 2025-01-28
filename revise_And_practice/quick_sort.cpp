#include<iostream>
using namespace std;
#include<vector>
int partition(int arr[],int si,int ei){
    int count=0; //for counting the piovit index
    int pivotElement=arr[si];
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotElement) count++;
    }
    // now i have the element of the piviot index
    int pivotIndx=count+si;
    swap(arr[si],arr[pivotIndx]); // now the pivot element at it's correct position
    // now the task is to make the smaller to left of pivoit and 
    // larger to the right
    int i=si;
    int j=ei;
    while(i<pivotIndx && j>pivotIndx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndx;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei ) return ; // base case
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei); // here pi is excluded because it already at it's correct position
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}