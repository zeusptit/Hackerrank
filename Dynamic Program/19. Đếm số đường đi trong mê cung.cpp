#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    char a[n + 1][n + 1]; int dp[n + 1][n + 1];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == '.')
            {
                if(i == 0 && j == 0)
                    dp[i][j] = 1;
                else if(i == 0)
                    dp[i][j] = dp[i][j - 1];
                else if(j == 0)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
                dp[i][j] %= mod;
            }else
                dp[i][j] = 0;
        }
    }
    cout << dp[n - 1][n - 1];
}
/*

*/