#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{ 
    quick();
    int n;cin >> n ;
    int a[n],b[n];
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < n; i++)cin >> b[i];
    sort(a,a + n);
    sort(b,b + n,greater<int>());
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " " << b[i] << " ";
    }
}