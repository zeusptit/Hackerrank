#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main()
{ 
    quick();
    int n,m;cin >> n >> m;
    set<int>hop;
    map<int,int> giao;
    for(int i = 0; i < n; i++)
    {
        int x;cin >> x;
        hop.insert(x);
        giao[x] = 1;
    }
    for(int i = 0; i < m; i++)
    {
        int x;cin >> x;
        if(giao[x] == 1)giao[x] = 2;
        hop.insert(x);
    }
    for(auto it : giao)
        if(it.second == 2)
            cout << it.first << ' ';
    cout << endl;
    for(int x : hop)cout << x << ' ';
}