// take 3 pointer and do the sorting approch if i can sort the 0 and 2 to the left and right respectively 
// then it automatically sort the 1 to the center that's the reason why in first else if statement i skip 1 !!

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//        int start=0,mid=0,end=nums.size()-1;
//        while(mid<=end){
//         if(nums[mid]==0){
//             swap(nums[start],nums[mid]);
//             mid++;
//             start++;
//         }
//         else if(nums[mid]==1){
//             mid++;
//         }
//         else if(nums[mid]==2){
//             swap(nums[mid],nums[end]);
//             end--;
            
//         }
//        }
//     }
// };