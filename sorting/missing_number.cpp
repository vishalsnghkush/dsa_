// // 268..
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int i=0;
//         while(i<n){
//             int correctIndx=nums[i];
//             if(correctIndx==i || nums[i]==n) i++;
//             else swap(nums[i],nums[correctIndx]);
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i]!=i) return i;
//         }
//         return n;
//     }
// };