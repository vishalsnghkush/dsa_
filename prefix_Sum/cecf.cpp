// class Solution {
// public:
//     int maxSatisfaction(vector<int>& satisfaction) {
//         sort(satisfaction.begin(),satisfaction.end());
//         //              [-1,-8,0,5,-9] let the array
//         //              [-9,-8,-1,0,5] 
//         int n=satisfaction.size();
//         int suffix[n];
//         suffix[n-1]=satisfaction[n-1];
//         for(int i=n-2;i>=0;i--){
//             suffix[i]=suffix[i+1]+satisfaction[i];
//         }
//         // find the pivot index where the negative no is dropped
//         int idx=-1;
//         for(int i=0;i<n;i++){
//             if(suffix[i]>=0){
//                 idx=i;
//                 break;
//             }
//         }
//         if(idx==-1) return 0;
//         // maximum sum 
//         int x=1;
//         int maxsum=0;
//         for(int i=idx;i<n;i++){
//             maxsum+=(satisfaction[i]*x);
//             x++;
//         }
//         return maxsum;
//     }
// };