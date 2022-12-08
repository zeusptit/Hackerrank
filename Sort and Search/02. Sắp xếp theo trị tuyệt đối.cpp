#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

bool cmp(int a, int b)
{
    return abs(a) < abs(b);
}
int main(){
    quick();
    int n; cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    stable_sort(a, a + n, cmp);
    for(int x : a)cout << x << ' ' ;
}
/*

*/