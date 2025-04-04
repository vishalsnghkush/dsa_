#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

using namespace std;

// Function to extract non-zero digits of a number
vector<int> get_digits(int n) {
    vector<int> result;
    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        if (digit != 0) result.push_back(digit); // Only keep non-zero digits
        n /= 10; // Remove the last digit
    }
    return result;
}

// Memoization function to calculate minimum steps
int f(int n, vector<int>& dp) {
    if (n == 0) return 0; // Base case
    if (dp[n] != -1) return dp[n]; // Return cached result

    dp[n] = INT_MAX; // Initialize to maximum value
    vector<int> digits = get_digits(n); // Extract non-zero digits

    for (int d : digits) {
        dp[n] = min(dp[n], 1 + f(n - d, dp)); // Recursive call for each digit
    }

    return dp[n];
}

int main() {
    int n = 27; // Example input
    vector<int> dp(n + 1, -1); // Memoization array initialized to -1

    cout << "Minimum steps to reduce " << n << " to 0: " << f(n, dp) << endl;
    return 0;
}