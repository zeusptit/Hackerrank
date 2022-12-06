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
    int a[n];
    set<int> se;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = n - 1; i >= 0; i--)
    {
        se.insert(a[i]);
        v.pb(se.size());
    }
    int q; cin >> q;
    int k = v.size();
    while(q--)
    {
        int l; cin >> l;
        cout << v[k - l - 1] << endl;
    }
}
/*

*/