#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

ll process(ll x,ll y)
{
    if(y == 0)return 1;
    if(y == 1)return x;
    if(y % 2 == 0)return process(x * x % mod,y/2) % mod;
    else return x * process(x * x % mod,y/2) % mod;
}
ll solve(string s,ll k)
{
    int n = s.size();
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = (sum * 10 + (s[i] - '0')) % mod;
    }
    return process(sum,k);
}

int main()
{
    quick();
    string s;
    ll k;
    cin >> s >> k;
    cout<<solve(s,k);
}