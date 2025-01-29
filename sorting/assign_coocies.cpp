// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         // now i have to do all the other things
//         int i=0,j=0,count=0;
//         while(i<g.size() && j<s.size()){
//             if(s[j]>=g[i]){
//                 count++;  // jab tk coocies ka size greed ke elment se bada hoga tbb tk count ++ 
//                 // kro otherwise ...coocies ko++ karte jao.
//                 i++;
//                 j++;
//             }
//             else{
//                 j++;
//             }
//         } 
//         return count;
//     }
// };