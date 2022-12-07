#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


int main() {
    quick();
    int n;
    cin >> n;
    ll a[n];
    for(ll &x :a)cin >> x;
    ll cnt = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] <= a[i - 1])
        {
            int dis = a[i - 1] - a[i] + 1;
            cnt += dis;
            a[i] += dis;
        }
    }
    cout << cnt;
}
