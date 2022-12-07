#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int &x:a)cin >> x;
    sort(a, a + n);
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += 1ll * a[i] * i;
        sum %= mod;
    }
    cout << sum % mod;
}
/*
                                                                                                    
*/