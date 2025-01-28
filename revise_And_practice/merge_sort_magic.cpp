#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&v){
    // 
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            v[k]=a[i];
            i++;
        }
        else{
            v[k]=b[j];
            j++;
        }
        k++;
    }
    // now let's consider that the a is remeaining
    if(i==a.size()){
        while(j<b.size()){
        v[k]=b[j];
        j++;
        k++;
        }
    }
    if(j==b.size()){
        while(i<a.size()){
        v[k]=a[i];
        i++;
        k++;
        }
    }

}
void mergesort(vector<int>&v){
    // now divide it into two equal part
    int n=v.size();
    if(n<=1) return;
    int mid=n/2;
    vector<int>a(v.begin(),v.begin()+mid);
    vector<int>b(v.begin()+mid,v.end());
    // now using the magic
    mergesort(a);
    mergesort(b);
    // now appling merge
    merge(a,b,v);
}
int main(){
    vector<int>v={5,1,3,0,4,9,6};
    mergesort(v); /// iisko pass kr ke hmko do part me break krege then
    //printing
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}