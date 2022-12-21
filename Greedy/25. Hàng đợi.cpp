#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    vector<int> v;
    while(n--)
    {
        int x; cin >> x;
        v.pb(x);
    }
    ll ans = 0, time = 0;
    sort(v.begin(), v.end());
    for(int x : v)
    {
        if(x - time >= 0)
        {
            ans++;
            time += x;
        }
    }
    cout << ans;
}
/*

*/