#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&arr){
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    if(i==a.size()){
        // a is finished'
        while(j<b.size()){
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            arr[k]=a[i];
            i++;
            k++;
        }
    }
}
void mergesort(vector<int>&arr){
    int n=arr.size();
    if(n<=1) return;
    int mid=n/2;
    vector<int>a(arr.begin(),arr.begin()+mid);
    vector<int>b(arr.begin()+mid,arr.end());
    // applying the magic
    mergesort(a);
    mergesort(b);

    // merge
    merge(a,b,arr);
}
int main(){
    vector<int>arr={7,3,4,5,3,52};
    mergesort(arr);
    // printing
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}