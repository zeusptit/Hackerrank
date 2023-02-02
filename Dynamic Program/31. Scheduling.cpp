#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

struct jS
{
    int f, s, v;
    friend istream& operator >> (istream& in, jS &a)
    {
        in >> a.f >> a.s >> a.v;
        return in;
    }
};

bool cmp(jS a, jS b)
{
    return a.s < b.s;
}

int solve(jS a[], int n)
{
    int l = 0, r = n - 1, res = -1;
    while(l <= r)
    {
        int m = (l + r)/2;
        if(a[m].s < a[n].f)
        {
            res = m;
            l = m + 1;
        }else
            r = m - 1;
    }
    return res;
}
int main(){
    quick();
    int n; cin >> n;
    jS a[n];
    for(int i = 0; i < n; i++)cin >> a[i];
    sort(a, a + n, cmp);
    ll dp[n];
    dp[0] = a[0].v;
    for(int i = 1; i < n; i++)
    {
        ll temp = a[i].v;
        int res = solve(a, i);
        if(res != - 1)
        {
            temp += dp[res];
        }
        dp[i] = max(dp[i - 1], temp);
    }
    cout << dp[n - 1];
}
/*

*/