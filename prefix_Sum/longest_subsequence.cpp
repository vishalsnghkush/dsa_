// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         int n=nums.size();
//         int m=queries.size();
//         vector<int>ans(m);
//         sort(nums.begin(),nums.end());
//         // make a prefix sum of the nums;
//         for(int i=1;i<n;i++){
//             nums[i]+=nums[i-1];
//         }
//         // now triverse the loop ans calcualte
//         for(int i=0;i<m;i++){
//             int lenght=0;
//             for(int j=0;j<n;j++){
//                 if(nums[j]>queries[i]) break;
//                 else lenght++;
//             }
//             ans[i]=lenght;
//         }
//         return ans;
//     }
// };