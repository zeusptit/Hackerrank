#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int cnt = 0;

int solve(ll n)
{
    if(n == 1)
        return 0;
    int x = 1e9, y = 1e9, z = 1e9;
    if(!(n % 2))
        x = 1 + solve(n / 2);
    if(!(n % 3))
        y = 1 + solve(n / 3);
    if(n > 1)
        z = 1 + solve(n - 1);
    return min(x, min(y,z));
}

int main(){
    quick();
    ll n; cin >> n;
    cout << solve(n);
}
/*

*/