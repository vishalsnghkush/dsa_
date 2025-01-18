#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstOccurance(vector<int>&v,int target){
    int start=0;
    int end=v.size()-1;
    int index=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(v[mid]==target){
            index=mid;
            end=mid-1;
        }
        else if(v[mid]>target){
            end=mid-1;
        }
        else start=mid+1;
    }
    return index;
}
int main(){
    vector<int>v={1,2,4,5,5,5,9,15,18,21,24};// 0-11  
    sort(v.begin(),v.end());
    int target=5;
    cout<<firstOccurance(v,target);
}