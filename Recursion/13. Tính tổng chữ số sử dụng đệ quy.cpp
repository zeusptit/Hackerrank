#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int solve(ll n)
{
    if(n == 0)
        return 0;
    else
        return n % 10 + solve(n / 10);
}

int main(){
    quick();
    ll n; cin >> n;
    cout << solve(n);
}
/*

*/