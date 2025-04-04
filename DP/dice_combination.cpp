#include <iostream>
#include <vector>
#include <climits>
#define mod 10000007
#define ll long long int
using namespace std;
vector<ll>dp(1000000,-1);
ll f(int n){
    if(n==0) return 1;
    ll sum=0;
    if(dp[n]!=-1) return dp[n];
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        sum=(sum % mod + f(n-i) % mod) % mod;
    }
    return dp[n]=sum%mod;
}
int main() {
    int n;
    f(n);
    return 0;
}