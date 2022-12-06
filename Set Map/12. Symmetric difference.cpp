#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n,m;
    cin >> n >> m;
    set<int> se;
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        se.insert(x);
        mp[x] = 1;
    }
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        se.insert(x);
        if(mp[x] == 1)mp[x] = 2;
    }
    for(int x : se)
    {
        if(mp[x] != 2)
            cout << x << ' ';
    }
}
/*

*/