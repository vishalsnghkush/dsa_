// class Solution {
// public:
//     bool check(int speed,vector<int>& piles, int h){
//         int count=0;
//         int n=piles.size();
//         for(int i=0;i<n;i++){
//             if(count>h) return false;
//             if(speed>=piles[i]) count++;
//             else if(piles[i]%speed==0) count+=piles[i]/speed;
//             else count+=(piles[i]/speed+1);
//         }
//         if(count>h) return false;
//         else return true;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n=piles.size();
//         int mx=-1;
//         int ans=-1;
//         for(int i=0;i<n;i++){
//             mx=max(mx,piles[i]);
//         }
//         int high=mx; // minimum  hour is the  exactly the if monkey eat's all banana in an hour 
//         int low=1;  // sabse slowest to yahi ho sakta hai;
//         while(low<=high){
//             int mid=low+(high-low)/2; // actully mid act's as a local vaivable for the speed;
//             if(check(mid,piles,h)){
//                 ans=mid;
//                 // go to the left side of the loop and check if there preste n an any smallest element or not;
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return ans;
//     }
// };