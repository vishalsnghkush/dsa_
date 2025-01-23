#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int>&a,vector<int>&b,vector<int>&ans){
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
int main(){
    vector<int>a={1,2,3,4,5,6};
    vector<int>b={5,7,8,9};
    int n1=a.size()-1;
    int n2=b.size()-1;
    vector<int>ans(n1+n2);
    // before doing so i need to make a new variable and let then pass
    
    mergeSort(a,b,ans);
    for(int i=0;i<n1+n2;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}