#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

string res = "";
void solve(ll n)
{
    if(n == 0)
    {
        reverse(res.begin(),res.end());
        return ;
    }else{
        int temp = n % 16;
        if(temp < 10)
            res += temp + '0';
        else
            res += temp + 55;
        solve(n / 16);
    }
}

int main(){
    quick();
    ll n; cin >> n;
    if(n == 0)
    {
        cout << 0;
        return 0;
    }
    solve(n);
    cout << res;
}
/*

*/