#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

ll solve(ll n)
{
    ll res = 0;
    for(int i = 5; i <= n; i *= 5)
    {
        res *= n/i;
        res %= mod;
    }
    return res;
}

int main(){
    quick();
    ll n;
    cin >> n;
    cout << solve(n);
}
/*

*/