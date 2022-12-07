#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int solve(int a[],int n,int k)
{
    unordered_map<int,int>mp;
    int res = 0;
    int cur = 0;
    for(int i = 0; i < n; i++)
    {
        cur += a[i];
        int mod=((cur % k) + k) % k;
        if(mod == 0)
            res = i + 1;
        else if(mp.find(mod) == mp.end())
            mp[mod] = i;
        else
            res = max(res,i - mp[mod]);
    }
    return res;
}
int main()
{
    quick();
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a)cin >> x;
    cout << solve(a,n,k);
}
/*

*/