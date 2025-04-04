// class Solution {
//     public:
//         int fib(int n) {
//             // Handle the base case for n = 0
//             if (n == 0) return 0;
    
//             // Create a vector to store Fibonacci numbers up to n
//             std::vector<int> dp(n + 1);
    
//             // Base cases: fib(0) = 0, fib(1) = 1
//             dp[0] = 0;
//             dp[1] = 1;
    
//             // Fill the DP vector using the iterative approach
//             for (int i = 2; i <= n; ++i) {
//                 dp[i] = dp[i - 1] + dp[i - 2];
//             }
    
//             // Return the nth Fibonacci number
//             return dp[n];
//         }
//     };