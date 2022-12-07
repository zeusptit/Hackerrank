#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

ll gcd(ll x,ll y)
{
    if(y == 0)return x;
    else return gcd(y,x % y);
}
 int main(){
    quick();
    ll a,x,y;
    cin >> a >> x >> y;
    ll k = gcd(x,y);
    for(int i = 1;i <= k; i++)
    {
        cout << a;
    }
}
/*

*/