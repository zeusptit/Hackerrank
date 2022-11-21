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
    if(b == 1)return a;
    if(b % 2 == 0)
        return powMod(a * a % mod, b / 2) % mod;
    else return a * powMod(a * a % mod,b / 2) % mod;
}

int main(){
    quick();
    int n,k;
    cin >> n >> k;
    int res = 0;
    ll ans = 0;
    while(k)
    {
        int r = k % 2;
        if(r != 0)
        {
            ans = powMod(n,res);
            ans %= mod;
        }
        res++;
        k /= 2;
    }
    cout << ans;
}
/*

*/