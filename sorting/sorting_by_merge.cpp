#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&ans){
    int n1=a.size();
    int n2=b.size();
    int i=0;  // for a
    int j=0;  // for b
    int k=0;  // for ans
    while(i<n1 && j<n2){
      if(a[i]<b[j]){
      ans[k]=a[i];
      i++;
      k++;  
      }
      else{
        ans[k]=b[j];
        k++;
        j++;
      }
    }
    if(i==a.size()){// a is ended here
        while(j<b.size()){
            ans[k]=b[j];
            k++;
            j++;
        }
    }
    if(j==b.size()){// b is ended here
        while(i<a.size()){
            ans[k]=a[i];
            k++;
            i++;
        }
    }
}
void mergesortt(vector<int>&v){
    // here i have to split array into two new array with
    // sorted array that's all;
    int n=v.size();
    // copying the element into it ..
    if(n<=1) return;
    int mid = n / 2;
    vector<int> a(v.begin(), v.begin() + mid);
    vector<int> b(v.begin() + mid, v.end());
    // magic for the recursion
    mergesortt(a);
    mergesortt(b);
    // merge
    merge(a,b,v);    
}

int main(){
    vector<int>v={5,1,3,0,4,9,6};
    mergesortt(v);

    // printing
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}