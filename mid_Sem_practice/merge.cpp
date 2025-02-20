#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&ans){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
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
    //
    if(i==a.size()) {
        while(j<b.size()){
            ans[k]=b[j];
            k++;
            j++;
        }
    }
   if(j==b.size()){
    while(i<a.size()){
        ans[k]=a[i];
        i++;
        k++;
    }
   }
}
void merge_sort(vector<int>&arr){
    if(arr.size()<=1) return;
    int mid=arr.size()/2;
    int n=arr.size();
    vector<int>a(arr.begin(),arr.begin()+mid);
    vector<int>b(arr.begin() + mid, arr.end());
    merge_sort(a);
    merge_sort(b);
    vector<int> merged(arr.size());
    merge(a, b, merged);
    arr = merged;
}
int main(){
    vector<int>arr={3,4,5,6,7};
    vector<int>brr={1,2,7,8,9};
    vector<int>ans(arr.size()+brr.size());
    vector<int>array={5,3,6,3,4,6,0};
    merge_sort(array);
    //merge(arr,brr,ans);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
}