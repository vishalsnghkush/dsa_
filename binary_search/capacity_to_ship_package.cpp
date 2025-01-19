// class Solution {
// public:
//     bool check(int mid,vector<int>& weights, int days){
//         int m=mid;
//         int n=weights.size();
//         int count=1;
//         for(int i=0;i<n;i++){
//             if(m>=weights[i]){
//                 m-=weights[i];

//             }
//             else{
//                 count++;
//                 m=mid;
//                 m-=weights[i];
//             }
//         }
//         if(count>days) return false;
//         else return true;
//     }
//     int shipWithinDays(vector<int>& weights, int days) {
//         int n=weights.size();
//         int max=INT_MIN;
//         int sum=0;  // low is the max element and high is the total sum;
//         for(int i=0;i<n;i++){
//             sum+=weights[i];
//             if(weights[i]>max){
//                 max =weights[i];
//             }
//         }
//         int high=sum;
//         int low=max;
//         int currentCapacity=sum;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(check(mid,weights,days)){  // mid is basically the current possible index and 
//                                           // it's basicaly check the current position 
//                 currentCapacity=mid;
//                 high=mid-1;  // to ensure that it's is the smallest
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return currentCapacity;
//     }
// };