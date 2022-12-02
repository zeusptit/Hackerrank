#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int solve(int a[],int n,int k)
{
   map<int,int> mp;
   int res = 0;
   for(int i = 0; i < n; i++)
   {
        if(mp.find(a[i]) == mp.end())
            mp[a[i]] = i;
        
        if(mp.find(a[i] - k) != mp.end())
        {
            res = max(res,i - mp[a[i] - k]);  
        }

        if(mp.find(a[i] + k) != mp.end())
        {
            res=max(res,i - mp[a[i] + k]);
        }
   }
   if(res == 0)return -1;
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