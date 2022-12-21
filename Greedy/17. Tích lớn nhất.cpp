#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    sort(a, a + n);
    ll res = 0;
    if(n == 0)res = 0;
    else if(n == 1)res = a[0] * a[1];
    else{
        res = max(res, a[n - 1] * a[n - 2]);
        res = max(res, a[0] * a[1]);
        res = max(res, a[n - 1] * a[n - 2] * a[n - 3]);
        res = max(res, a[0] * a[1] * a[n - 1]);
    }
    cout << res;
}
/*

*/