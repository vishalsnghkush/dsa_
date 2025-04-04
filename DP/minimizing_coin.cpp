#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoins(int amount, vector<int>& coins, vector<int>& dp) {
    if (amount == 0) return 0;
    if (amount < 0) return INT_MAX;
    if (dp[amount] != -1) return dp[amount];
    dp[amount] = INT_MAX;
    for (int coin : coins) {
        int subResult = minCoins(amount - coin, coins, dp);
        if (subResult != INT_MAX) dp[amount] = min(dp[amount], 1 + subResult);
    }
    return dp[amount];
}

int main() {
    int n, amount;
    cin >> n >> amount;
    vector<int> coins(n), dp(amount + 1, -1);
    for (int i = 0; i < n; i++) cin >> coins[i];
    int result = minCoins(amount, coins, dp);
    cout << (result == INT_MAX ? -1 : result) << endl;
    return 0;
}