#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n, k; cin >> n;
    k = 6;
    ll dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= min(i, k); j++){
            dp[i] += dp[i - j];
            dp[i] %= mod;
        }
    }
    cout << dp[n];
}
/*

*/