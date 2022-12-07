#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int odd = 0, even = 0;

void solve(ll n)
{
    if(n == 0)
        return;
    else{
        int temp = n % 10;
        if(temp % 2)odd += temp;
        else even += temp;
        solve(n / 10);
    }
}

int main(){
    quick();
    ll n; cin >> n;
    solve(n);
    cout << even << endl << odd;
}
/*

*/