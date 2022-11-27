#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int k;
int solve(ll n)
{
    if(n == 0)
        return k;
    else{
        k = n % 10;
        return solve(n / 10);
    }
}

int main(){
    quick();
    ll n; cin >> n;
    if(!n)
    {
        cout << 0;
        return 0;
    }
    cout << solve(n);
}
/*

*/