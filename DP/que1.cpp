/*
Given a no n you can perform any of the following operation on it some no of times
1. Reduce n to n-1;
2. if n is divisible by 2 to make it n/2
3. if n is divisible by 3 make it n/3
   -> Find out in how many min step you can reduce n to 1

*/


#include <iostream>
#include <climits>
#include <vector>
#define inf INT_MAX
using namespace std;

int f(int n, vector<int>& dp) {
    if (n == 1) return 0;
    if (dp[n] != -1) return dp[n];

    int res = f(n - 1, dp);
    if (n % 2 == 0) res = min(res, f(n / 2, dp));
    if (n % 3 == 0) res = min(res, f(n / 3, dp));

    dp[n] = 1 + res;
    return dp[n];
}

int main() {
    int n = 10;
    vector<int> dp(n + 1, -1);

    cout << f(n, dp) << endl;
    return 0;
}