#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

void solve1(ll n)
{
    if(n == 0)
        return;
    else{
        cout << n % 10 << ' ';
        solve1(n / 10);
    }
}

void solve2(ll n)
{
    if(n < 10)
        cout << n << ' ';
    else{
        solve2(n / 10);
        cout << n % 10 << ' ';
    }
}


int main(){
    quick();
    ll n; cin >> n;
    if(!n)
    {
        cout << 0 << endl << 0;
        return 0;
    }
    solve2(n);
    cout << endl;
    solve1(n);
}
/*

*/