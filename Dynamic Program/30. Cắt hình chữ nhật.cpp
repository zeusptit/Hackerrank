#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int dp[501][501];
int main(){
    quick();
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=  m; j++)
        {
            dp[i][j] = mod;
        }
    }
    for(int i = 1; i <= 500; i++)dp[i][i] = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            for(int k = 1; k < i; k++)
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
            for(int k = 1; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
        }
    }
    cout << dp[n][m];
}
/*

*/