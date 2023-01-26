#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int solve(int a[],int l,int r,int x)
{
    if(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)return x;
        if(a[m] < x )return solve(a, m + 1, r, x);
        else return solve(a, l, m - 1, x );
    }
    return -1;
}

int main(){
    quick();
    int n, X; cin >> n >> X;
    int a[n];
    for(int &x : a) cin >> x;
    int k = solve(a, 0, n - 1, X);
    if(k != - 1)
        cout << "YES";
    else
        cout << "NO";
}
/*

*/