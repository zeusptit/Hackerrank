#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll solve(ll a,ll b)
{
    if(!b)
        return a;
    else
        return solve(b, a % b);
}

int main(){
    quick();
    ll a,b;
    cin >> a >> b;
    cout << solve(a,b) << ' ' << 1ll * a / solve(a,b) * b;
}
/*

*/