#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n,S; cin >> n >> S;
    int a[n], dp[S + 1] = {0};
    for(int &x : a) cin >> x;
    dp[0] = 0;
    for(int i = 1; i <= S; i++)
    {
        dp[i] = mod;
        for(int j = 0; j < n; j++)
        {
            if(i >= a[j])
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
        }
    }
    if(dp[S] >= mod) cout << -1;
    else cout << dp[S];
}
/*

*/