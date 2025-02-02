// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//        vector<int>ans;
//         int n=nums.size();
//         int i=0;
//         while(i<n){
//             int correctIndx=nums[i]-1;
//             if(nums[correctIndx]==nums[i]) i++;
//             else swap(nums[i],nums[correctIndx]);
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i]!=i+1) ans.push_back(i+1);
//         }
//        return ans;
//     }
// };