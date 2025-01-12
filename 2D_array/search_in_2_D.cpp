// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int row=matrix.size();
//     int col=matrix[0].size();
//     int i=0;
//     int j=col-1;//last element i.e (0,4) se search krge
//     while(i<row&&j>=0){//jab tak matrix se bahar na chala jaye
//         if(matrix[i][j]==target) return true;
//         else if(matrix[i][j]>target) j--;//then go left 
//         else i++;//go to bottom
//     }
//     return false;
//     }
// }