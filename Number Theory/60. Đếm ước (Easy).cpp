#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
map<int,int> mp;

void solve(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                n /= i;
                cnt++;
            }
            mp[i] += cnt;
        }
    }
    if(n != 1)mp[n] += 1;
}

int st[1000006];
void init()
{
    for(int i = 0; i <= 1e6; i++)
    {
        solve(i);
    }
}
int main(){
    quick();
    int n;
    cin >> n;
    init();
    map<int,int> mp1;
    for(int i = 0; i < n; i++)
    {
        int x;cin >> x;
        mp1[x] += mp[x];
    }
    ll res = 1;
    for(auto it : mp1)
    {
        if(it.second)
        {
            res *= it.second + 1;
            res %= mod;
        }
    }
    cout << res;
}
/*

*/