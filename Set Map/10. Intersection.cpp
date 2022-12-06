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
    map<int,int> mp;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    for(int i = 0; i < m; i++)
    {
        int x;cin >> x;
        if(mp[x] == 1)mp[x] = 2;
    }
    for(int i = 0; i < n; i++)
    {
        if(mp[a[i]] == 2)
        {
            cout << a[i] << ' ';
            mp[a[i]] = 0;
        }
    }
}
/*

*/