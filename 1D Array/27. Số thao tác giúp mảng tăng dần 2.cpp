#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{ 
    quick();
    int n,d;cin >> n >> d ;
    ll a[n],cnt = 0;
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i - 1])
        {
            ll cft = (a[i - 1] - a[i] + d)/d;
            a[i] += cft * d;
            cnt += cft;
        }
    }
    cout << cnt;
}