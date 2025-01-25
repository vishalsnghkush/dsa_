//  class Solution {
// public:
// // let the array is 1 2 3 4
// // then its pre is  1 1 2 6 which is bacically equal to the pre[0]=1 always
// // because is se pahele wale ka product to 1 hi rahega then do the same thing i.e
// //  pre[1] = arr[0] th elemenrt tk ka sum hoga
// // after doing all thee things i have to do the 

// // suff product is ..24 12 4 1.
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>pre(n);
//         vector<int>suf(n);
//         vector<int>ans(n);
//         int p=nums[0];
//         pre[0]=1;
//         for(int i=1;i<n;i++){
//             pre[i]=p;
//             p*=nums[i];
//         }
//         p=nums[n-1];
//         suf[n-1]=1;
//         for(int i=n-2;i>=0;i--){
//             suf[i]=p;
//             p*=nums[i];
//         }
//         // now i have suffix and prefix then i have to calculate the sum of the 
//         // array exexpt  self
//         for(int i=0;i<n;++i){
//             ans[i]=suf[i]*pre[i];
//         }
//         return ans;
//     }
// };