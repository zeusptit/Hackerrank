#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main()
{ 
    quick();
    int n;cin >> n;
    int a[n];
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(auto it : mp)
        if(it.second)
            cout << it.first << " " << it.second << endl;
    cout << endl;
    for(int x : a)
    {
        if(mp[x])
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}