#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int solve(int a[],int n,int k)
{
    unordered_map<ll,int> mp;
    ll res = INT_MAX;
    ll curprfSum = 0;
    for(int i = 0; i < n; i++)
    {
        curprfSum += a[i];
        if(curprfSum == k)
        {
            ll curLen = i + 1;
            res = min(res,curLen);
        }
        ll temp = curprfSum - k;
        if(mp.count(temp))
        {
            ll idx = mp[temp];
            ll curIdx = i;
            res=min(res,curIdx - idx);
        }
        mp[curprfSum] = i;
    }
    if(res >= INT_MAX)return -1;
    return res;
}
int main()
{
    quick();
    int n,k;cin >> n >> k;
    int a[n];
    for(int &x : a)cin >> x;
    cout << solve(a,n,k);
}
/*

*/