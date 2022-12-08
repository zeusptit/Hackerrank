#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{ 
    quick();
    int n, k;cin >> n >> k;
    int a[n], cnt = 1;
    for(int &x : a)cin >> x;
    sort(a, a + n); 
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i - 1] <= k)
            continue;
        else
            cnt++;
    }
    cout << cnt;
}