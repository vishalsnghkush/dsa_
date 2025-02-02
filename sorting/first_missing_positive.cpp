// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         //t c O(n);
//         // s. c O(1);
//         int n=nums.size();
//         int i=0;
//         while(i<n){
//             //int correctIndx=nums[i]-1;
//             if(nums[i]<=0) i++; // negative no ko skip kr do
//             else if(nums[i]>n || nums[i]==i+1 || nums[nums[i]-1]==nums[i]) i++;
//             else swap(nums[i],nums[nums[i]-1]);
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i]!=i+1) return i+1;
//         }
//         return n+1;
//     }
// };
// // (nums[i]>n || nums[i]==i+1 || nums[correctIndx]==nums[i]) 
// // first condition is that ki jo nums[i] yani ki jo no hai agr wo size se bada hoga to i++
// // second is nums[i] ki value i+1 correct index pr hai yani ki sahi position pr hai too i++
// // thirrd correctindex ki value nums [i] ke equal hai to.