#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll temp(ll a,ll b)
{
    return ((a % mod) * ( b % mod)) % mod;
}
ll solve(ll a,ll b)
{
    if(b == 0)
        return 1;
    ll tmp = solve(a,b / 2);
    if(b % 2)
        return temp(temp(tmp,tmp),a);
    else 
        return temp(tmp,tmp);
}
    
int main(){
    quick();
    ll a,b;
    cin >> a >> b;
    cout << solve(a,b) ;
}
/*

*/