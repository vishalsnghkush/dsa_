// class Solution {
//     public:
//         int fib(int n) {
//             // Create an array to store Fibonacci values (memoization)
//             int memo[31];
//             for (int i = 0; i <= 30; ++i) {
//                 memo[i] = -1; // Initialize all elements to -1
//             }
    
//             // Call the recursive function with memoization
//             return calculateFib(n, memo);
//         }
    
//     private:
//         int calculateFib(int n, int memo[]) {
//             // Base cases: fib(0) = 0, fib(1) = 1
//             if (n == 0) return 0;
//             if (n == 1) return 1;
    
//             // If the result is already computed, return it
//             if (memo[n] != -1) return memo[n];
    
//             // Otherwise, calculate and store the result
//             memo[n] = calculateFib(n - 1, memo) + calculateFib(n - 2, memo);
//             return memo[n];
//         }
//     };