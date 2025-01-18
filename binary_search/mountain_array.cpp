#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mountain(vector<int>&nums){
    int start=0;
    int end=nums.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]) return mid;
        else if(nums[mid]>nums[mid-1]) start=mid+1;
        else end=mid-1;
    }
}
int main(){
    //mountain peak element
    vector<int>nums={1,2,3,5,4,2};
    cout<<mountain(nums);
    return 0;
}