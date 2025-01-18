#include<iostream>
#include<vector>
using namespace std;
void subarray(int arr[],int indx,int size,int k, vector<int>&v){
    if(indx==size){
        if(v.size()==k){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    subarray(arr,indx+1,size,k,v);
    v.push_back(arr[indx]);
    subarray(arr,indx+1,size,k,v);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=3;//size of subsequesnce
    vector<int>v;
    subarray(arr,0,size,k,v);
    return 0;
}