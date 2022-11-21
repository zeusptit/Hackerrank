#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll powMod(ll a,ll b)
{
    if(b == 0)
        return 1;
    if(b % 2 == 0)
        return powMod(a * a % mod, b / 2) % mod;
    else return a * powMod(a * a % mod,b / 2) % mod;
}

ll gt[1000001];

int main(){
    quick();
    string s;
    cin >> s;
    int n = s.length();
    gt[1] = 1;
    for(ll i = 2; i <= 1000001; i++)
    {
        gt[i] = gt[i - 1] * i;
        gt[i] %= mod;
    }

    ll a[256] = {0};
    for(ll i = 0; i < n ; i++)
        a[s[i]]++;
    ll sum = 1;
    for(ll i = 0; i <= 256; i++)
    {
        if(a[i] > 0)
        {
            sum *= gt[a[i]];
            sum %= mod;
        }
    }
    ll r = powMod(sum,mod - 2);
    cout << ((gt[n] % mod) * (r % mod)) % mod;
}
/*

*/