#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int rotated_array(vector<int>&nums,int target){
    int start=0;
    int end=nums.size()-1;
    // since the array is rotated but when i compare the no
    // if i check the mid+1>mid  -->> sorted in right side
    // if mid+1<mid -->> sorted in left array
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target) return mid;
        if(nums[start]<=nums[mid]){
            // left part is sorted ..
            if(nums[start]<=target && target < nums[end]) end=mid-1;
            else start=mid+1;
        }
        else{
            if (nums[mid] < target && target <= nums[end]) start = mid + 1; 
            else end = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={4,5,6,7,0,1,2};
    int target=0;
    cout<<rotated_array(nums,target);
    return 0;
}