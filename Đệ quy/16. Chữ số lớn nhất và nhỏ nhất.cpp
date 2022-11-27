#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int min_val = 10, max_val = -1;
void solve(ll n)
{
    if(n == 0)
        return;
    else{
        int k = n % 10;
        max_val = max(max_val, k);
        min_val = min(min_val, k);
        return solve(n / 10);
    }
}

int main(){
    quick();
    ll n; cin >> n;
    solve(n);
    cout << max_val << ' ' << min_val;
}
/*

*/