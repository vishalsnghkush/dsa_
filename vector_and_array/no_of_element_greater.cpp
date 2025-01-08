#include<iostream>
#include<vector>
using namespace std;
void greater_r(vector<int>&v,int target){
    int count=0;
    for(auto i=0;i<v.size();i++){
        if(v[i]>target){
            count++;
        }
    }
    cout<<count;
}
int main(){
    vector<int>v;
    int n,x;
    cout<<"Enter the number of elements in the element in array: ";
    cin>>n;
    for(auto i=0;i<n;i++){
        cin>>x;
        v.push_back(x); 
    }
    cout<<"Enter the element to be searched: ";
    int target;
    cin>>target;
    greater_r(v,target);
    return 0;
}