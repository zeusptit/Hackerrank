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

void giaithua()
{
    gt[0] = 1;
    for(int i = 1; i <= 1e6; i++)
    {
        gt[i] = gt[i - 1] * i;
        gt[i] %= mod;
    }
}
int main(){
    quick();
    giaithua();
    int n;
    cin >> n;
    int a[4];
    for(int i = 0; i < 4; i++)cin >> a[i];
    ll sum = 1;
    for(int i = 0; i < 4; i++)
    {
        sum *= gt[a[i]];
        sum %= mod;
    }
    ll res = powMod(sum, mod - 2);
    cout << ((gt[n] % mod) * (res % mod)) % mod;
}
/*

*/