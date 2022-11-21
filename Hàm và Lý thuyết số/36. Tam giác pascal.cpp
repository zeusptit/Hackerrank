#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll powMod(ll a,ll b)
{
    a %= mod;
    ll res = 1;
    while(b)
    {
        if(b % 2)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        res *= a;
        b /= 2
    }
    return res;
}

int main(){
    quick();
    ll a,b;
    cin >> a >> b;
    cout << powMod(a,b);
}
/*

*/