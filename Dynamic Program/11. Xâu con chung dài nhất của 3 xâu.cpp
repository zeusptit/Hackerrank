#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string x,y,z; cin >> x >> y >> z;
    x = "@" + x; y = "@" + y; z = "@" + z; 
    int n = x.size(), m = y.size(), p = z.size();
    int dp[n][m][p];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < p; k++){
                if(i == 0 || j == 0 || k == 0)
                    dp[i][j][k] = 0;
                else if(x[i] == y[j] && y[j] == z[k])
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                else
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
            }
        }
    }
    cout << dp[n - 1][m - 1][p - 1];
}
/*

*/