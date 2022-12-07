#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;


int main(){
    quick();
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a)cin >> x;
    sort(a,a + n);
    int res = 1, l = 0,min_val;
    for(int r = 0; r < n; r++)
    {
        min_val = a[r] - k;
        while(a[l] < min_val)
            l++;
        res = max(res,r - l + 1);
    }
    cout << res;
}
/*

*/