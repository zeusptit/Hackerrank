#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{ 
    quick();
    int n;cin >> n;
    int a[n];
    ll sum = 0;
    for(int &x : a)cin >> x;
    sort(a, a + n, greater<int> ());
    for(int i = 0; i < n; i++)
    {
        if(a[i] - i >= 0)
            sum += a[i] - i;
        else 
            break;
    }
    cout << sum;
}