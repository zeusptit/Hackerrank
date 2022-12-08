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
    sort(a, a + n, greater<int>());
    int res = 1, stiff = a[0];
    for(int i = 1; i < n; i++)
    {
        if(stiff >= 1)
            res++;
        else
            break;
        stiff = min(stiff - 1, a[i]);
    }
    cout << res;
}
/*

*/