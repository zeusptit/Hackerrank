#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

ll a[1000001],b[1000001];
int main()
{ 
    quick();
    int n;cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << b[r] - b[l - 1] << endl;
    }
}