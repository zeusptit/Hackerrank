#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll x,y,d;
void solve(ll a,ll b)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        d = a;
    }else{
        solve(b, a % b);
        ll temp = x;
        x = y;
        y = temp - a / b * y;
    }
}

int main(){
    quick();
    ll a,b;
    cin >> a >> b;
    solve(a,b);
    if(d == 1)cout << (x % b + b) % b;
    else cout << "-1";
}
/*

*/