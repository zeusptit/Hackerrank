#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n;
    cin >> n;
    ll res = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        res = (res * 10 + x) % mod;
    }
    cout << res;
}
/*

*/