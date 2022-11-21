#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll powMod(ll a,ll b,ll m)
{
    if(b == 0)
        return 1;
    if(b % 2 == 0)
        return powMod(a * a % m, b / 2,m) % m;
    else return a * powMod(a * a % m,b / 2,m) % m;
}


int main(){
    quick();
    ll a,b,c,m;
    cin >> a >> b >> c >> m;
    ll r = powMod(a,b,m);
    ll c = powMod(c,m - 2,m);
    cout << (r * c) % m;
}
/*

*/