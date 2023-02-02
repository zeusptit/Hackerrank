#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n][n], dp[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    fill(&dp[0][0], &dp[0][0] + n * n, 0);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            //a[j][i]
            if(i == 0)
                dp[j][i] = a[j][i];
            else if(j == 0)
                dp[j][i] += max(dp[j + 1][i - 1], dp[j][i - 1]) + a[j][i];
            else if(j == n - 1)
                dp[j][i] += max(dp[j - 1][i - 1], dp[j][i - 1]) + a[j][i];
            else
                dp[j][i] += max(dp[j][i - 1], max(dp[j + 1][i - 1], dp[j - 1][i - 1])) + a[j][i];
        }
    }
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++)
        max_val = max(max_val, dp[i][n - 1]);
    cout << max_val ;
}
/*

*/