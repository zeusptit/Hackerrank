#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

ll C(int k,int n)
{
    if(k == 0 || k == n)return 1;
    if(k == 1)return n;
    return C(k - 1,n - 1) + C(k,n - 1);
}
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
    ll res = 0;
    for(int x : a)
    {
        if(mp[x] > 2)
        {
            res += C(2,mp[x]);
            mp[x] = 0;
        }
        else if(mp[x] == 2){
            res += 1;
            mp[x] = 0;
        }
    }
    cout << res;
}