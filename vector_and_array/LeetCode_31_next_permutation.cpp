// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         // let the vector is [1 2 3 4]
//         // the desired ans is [1 2 4 3]
//         // the approch is find the largest index k such that a[k] < a[k + 1]  ->k=2 i.e a[k]=3
//         // Find the largest index l greater than k such that a[k] < a[l]...-> l=3  i.e a[l]=4
//         // Swap the value of a[k] with that of a[l].    
//         // Reverse the sequence from a[k + 1] up to and including the final element a[n].
//         int index=-1;
//         int n=nums.size();
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]) {
//                 index=i;
//                 break;
//             }
//         }
//         if(index==-1) {
//              reverse(nums.begin(),nums.end());
//              return;
//         }
//         for(int i=n-1;i>=index;i--){
//             if(nums[i]>nums[index]) {
//                 swap(nums[i],nums[index]);
//                 break;
//             }
//         }
//         reverse(nums.begin() + index + 1, nums.end());
//         //reverse((nums.being() + index + 1),nums.end());
//         return ;


//     }
// };