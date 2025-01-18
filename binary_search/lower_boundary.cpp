#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lower(vector<int>&v,int target){
    // 4 6 10 12 18 20 30 45
    int start=0;
    int end=v.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(v[mid]<target && v[mid+1]>target) return mid;
        else if(v[mid]<target){
            start=mid+1;
        }
        else end=mid-1;
    }
}
int main(){
    vector<int>v={4,6,10,12,18,20,30,45};
    sort(v.begin(),v.end());
    int target=19;
    // now the vector will be like this
    // 4 6 10 12 18 20 30 45
    cout<<lower(v,target);
}