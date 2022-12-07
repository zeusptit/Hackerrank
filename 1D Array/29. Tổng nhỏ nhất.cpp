#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{ 
    quick();
    int n;cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    sort(a,a + n);
    ll res1 = 0,res2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0)res1 = res1 * 10 + a[i];
        else res2 = res2 * 10 + a[i];
    }
    cout << 1ll * (res1 + res2);
}