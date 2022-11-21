#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
vector<ll> v;
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

void sinh_so_tot(ll a,ll b) 
{
    queue<ll> q;
    q.push(a);q.push(b);
    while(true)
    {
        int top = q.front();q.pop();
        if(top > 1e7)break;
        v.push_back(top);
        q.push(top * 10 + a);
        q.push(top * 10 + b);
    }
}

ll sum(ll a, ll b)
{
    return powMod(a,b - 2);
}

ll tuyetvoi(ll n, ll x, ll y)
{
    ll res = (gt[x] * gt[y]) % mod;
    ll r = sum(res,mod);
    return (gt[n] * r) % mod;
}

ll giai_pt(ll a, ll b, ll n, ll m)
{
    ll temp = b - a;
    if(m - a * n >= 0 && (m - a * n) % temp == 0)
    {
        ll y = (m - n * a)/temp;
        ll x = n - y;
        if(x >= 0 && y >= 0)
            return tuyetvoi(n,x,y);
    }
    return 0;
}

int main(){
    quick();
    giaithua();
    ll a,b,n;
    cin >> a >> b >> n;
    sinh_so_tot(a,b);
    ll ans = 0;
    for(ll x : v)
    {
        ans += giai_pt(a,b,n,x);
        ans %= mod;
    }
    cout << ans % mod;
}
/*
zkSRW9
*/