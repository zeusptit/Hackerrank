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
    map<int,int> mp;
    for(int i = 0; i < n ; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    ll res = 1;
    for(auto it : mp)
    {
        if(mp[it.first])
        {
            res *= it.second + 1;
            res %= mod;
        }
    }
    cout << res;
}
/*

*/