// class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid) {
//         int row = grid.size();
//         int col = grid[0].size();

//         // Flip rows to ensure the first column is all 1s
//         for (int i = 0; i < row; i++) {
//             if (grid[i][0] == 0) {
//                 for (int j = 0; j < col; j++) {
//                     if (grid[i][j] == 1) {
//                         grid[i][j] = 0;
//                     } else {
//                         grid[i][j] = 1;
//                     }
//                 }
//             }
//         }

//         // Flip columns to maximize the number of 1s
//         for (int j = 0; j < col; j++) {
//             int noz = 0, noo = 0;
//             for (int i = 0; i < row; i++) {
//                 if (grid[i][j] == 1) {
//                     noo++;
//                 } else {
//                     noz++;
//                 }
//             }
//             if (noz > noo) {
//                 for (int i = 0; i < row; i++) {
//                     if (grid[i][j] == 1) {
//                         grid[i][j] = 0;
//                     } else {
//                         grid[i][j] = 1;
//                     }
//                 }
//             }
//         }

//         // Calculate the final score
//         int sum = 0;
//         for (int i = 0; i < row; i++) {
//             int k = 1;
//             for (int j = col - 1; j >= 0; j--) {
//                 sum += grid[i][j] * k;
//                 k *= 2;
//             }
//         }
//         return sum;
//     }
// };
