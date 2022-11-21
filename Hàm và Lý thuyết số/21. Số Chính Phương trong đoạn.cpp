#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    ll a,b;
    cin >> a >> b;
    ll cnt = 0;
    ll m = sqrt(a), n = sqrt(b);
    for(ll i = m; i <= n; i++)
    {
        ll temp = i * i;
        if(temp >= a && temp <= b )
            cnt++;
    }
    cout << cnt;
}
/*

*/