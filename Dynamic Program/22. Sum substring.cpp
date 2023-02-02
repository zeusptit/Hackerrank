#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s; cin >> s;
    int n = s.length();
    ll dp[n] = {0};
    dp[0] = s[0] - '0';
    for(int i = 1; i < n; i++)
    {
        dp[i] = dp[i - 1] * 10 + (i + 1) * (s[i] - '0');
    }
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += dp[i];
    }
    cout << sum;
}
/*

*/