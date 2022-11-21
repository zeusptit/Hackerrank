#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

ll lcm(ll a,ll b)
{
    return a/__gcd(a,b)*b;
}

int main(){
    quick();
    ll x,y,z,n;
    cin >> x >> y >> z >> n;
    ll temp = lcm(x,y);
    ll ans = lcm(temp,z);
    ll res = 1;
    if(ans < pow(10,n - 1)  || ans > pow(10,n) - 1 )
    {
        cout << -1 ;
        return 0;
    }else{
        ll d = pow(10,n - 1)/ans;
        res = (d + 1) * ans;
        cout << res;
    }
}
/*

*/