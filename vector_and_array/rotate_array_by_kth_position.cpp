#include<iostream>
#include<vector>
using namespace std;
//1 2 3 4 5 6 7
//k=2
//3 4 5 6 7 1 2
void kth_rotation(vector<int>&v,int k,vector<int>&new_array){
    int sizee=v.size()-1;
    for(auto i=0;i<v.size();i++){
        v[i+1+k]=new_array[i];
    }
    for(auto i=0;i<v.size();i++){
        cout<<new_array[i]<<" ";
    }
}
int main(){
    vector<int>v;
    vector<int>new_array;
    int n,x,k;
    cout<<"Enter the number of elements in the element in array: ";
    cin>>n;
    for(auto i=0;i<n;i++){
        cin>>x;
        v.push_back(x); 
    }
    cout<<"Enter the kth rotation element ";
    cin>>k;
    kth_rotation(v,k,new_array);
    return 0;
}