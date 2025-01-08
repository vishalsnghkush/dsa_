#include<iostream>
#include<vector>
using namespace std;
void targeted(vector<int>&v,int target){
    for(int i=0;i<v.size();i++){
        if(v[i]+v[i+1]==target){
            cout<<"Got it";
        }
    }
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
    targeted(v,target);
    return 0;
}