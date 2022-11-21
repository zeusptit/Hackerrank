#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll powMod(ll a,ll b,int m)
{
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    if(b % 2 == 0)
        return powMod(a * a % m, b / 2, m) % m;
    else return a * powMod(a * a % m,b / 2,m) % m;
}


int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        ll r = powMod(b,c,mod - 1);
        ll res = powMod(a,r,mod);
        cout << res << endl;
    }
}
/*

*/