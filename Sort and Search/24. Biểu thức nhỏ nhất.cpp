#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a)cin >> x;
    ll res = a[0];
    sort(a + 1, a + n, greater<int>());
    for(int i = 1; i < n; i++)
    {
        if(i <= k)
            res += a[i];
        else
            res -= a[i];
    }
    cout << res;
}
/*

*/