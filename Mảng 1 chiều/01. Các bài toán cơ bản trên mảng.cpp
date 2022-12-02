#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

bool isPrime(int n)
{
    for(int i = 2;i <= sqrt(n); i++)
        if( n % i == 0)
            return false;
    return n > 1;
}

int main(){
    quick();
    int n; cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    int min_val = INT_MAX,max_val = INT_MIN,idx_min = 0, idx_max = 0;
    ll cnt = 0,sum = 1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max_val)
        {
            max_val = a[i];
            idx_max = i;
        }
        if(a[i] <= min_val)
        {
            min_val = a[i];
            idx_min = i;
        }
        if(isPrime(a[i]))cnt++;
        sum *= a[i];
        sum %= mod;
    }
    cout << max_val << ' ' << idx_max << endl;
    cout << min_val << ' ' << idx_min << endl;
    cout << cnt << endl;
    int flag = 1;
    int max2 = INT_MIN, min2 = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max2 && i != idx_max)
            max2 = a[i];
        if(a[i] < min2 && i != idx_min)
            min2 = a[i];
        if(a[i] != a[n - i - 1]) flag = 0;
    }
    cout << max(1ll * max2 * max_val,1ll * min_val * min2) << endl;
    if(flag)cout << "YES";
    else cout << "NO";
    cout << endl;
    cout << sum;
}
/*

*/