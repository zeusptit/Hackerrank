#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    ll dp[50] = {0};
    dp[0] = 0; dp[1] = 1; dp[2] = 2; dp[3] = 4;
    for(int i = 4; i <= 40; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    cout << dp[n];
}
/*

*/