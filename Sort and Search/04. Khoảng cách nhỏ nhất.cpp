#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    sort(a, a + n);
    int min_val = INT_MAX;
    for(int i = 1; i < n; i++)
        min_val = min(a[i] - a[i - 1], min_val);
    cout << min_val;
}
/*

*/