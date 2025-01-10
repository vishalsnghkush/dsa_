// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         int n = nums.size(); // corrected size variable
//         sort(nums.begin(), nums.end());

//         for (int i = 0; i < n - 1; i++) {
//             if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates
//             int j = i + 1, k = n - 1;

//             while (j < k) {
//                 int sum = nums[i] + nums[j] + nums[k];
//                 if (sum == 0) {
//                     ans.push_back({nums[i], nums[j], nums[k]});
//                     j++;
//                     k--;
//                     while (j < k && nums[j] == nums[j - 1]) j++; // skip duplicates
//                     while (j < k && nums[k] == nums[k + 1]) k--; // skip duplicates
//                 } else if (sum < 0) {
//                     j++;
//                 } else {
//                     k--;
//                 }
//             }
//         }
//         return ans;
//     }
// };
