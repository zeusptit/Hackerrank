#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n,k; cin >> n >> k;
    int a[n]; ll sum = 0;
    for(int &x : a)
    {
        cin >> x;
        sum += x;
    }
    if(k <= n / 2)
    {
        sort(a, a + n);
        ll temp = 0;
        for(int i = 0; i < k; i++)temp += a[i];
        cout << sum - 2 * temp;
    }else{
        sort(a,a + n, greater<int>());
        ll temp = 0;
        for(int i = 0; i < k; i++)temp += a[i];
        cout << 2 * temp - sum;
    }
}
/*

*/