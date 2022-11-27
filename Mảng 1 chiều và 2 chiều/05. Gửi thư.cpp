#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


int main() {
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)cin >> a[i];
    int mn,mx;
    for(int i = 0; i < n; i++)
    {
        if(i == 0)cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
        else if(i == n - 1)cout << (a[n - 1] - a[n - 2]) << " " << (a[n - 1] - a[0]) << endl;
        else{
            mn = min(a[i] - a[i - 1],a[i + 1] - a[i]);
            mx = max(a[i] - a[0],a[n - 1] - a[i]);
            cout << mn << " " << mx << endl;
        }
    }
}
