#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int bS(int a[],int l,int r,int x)
{
    if(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)return x;
        if(a[m] < x )return bS(a, m + 1, r, x);
        else return bS(a, l, m - 1, x );
    }
    return -1;
}
int main() {
    quick();
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)cin >> a[i];
    sort(a, a + n);
    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;
        if(bS(a, 0, n - 1, x) != -1)cout << "YES" << endl; else cout << "NO" << endl;
    }
    return 0;
}