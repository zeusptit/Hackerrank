#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{ 
    quick();
    int n;cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)cin >> a[i];
    sort(a,a + n);
    ll res = 1e9,cnt = 0;
    for(int i = 1; i < n; i++)
    {
        ll dis = a[i] - a[i - 1];
        if(dis < res)res = dis;
    }
    for(int i = 1; i < n; i++)if(res == a[i] - a[i - 1])cnt++;
    cout << res << " " << cnt;
}