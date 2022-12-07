#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int solve(ll n,int p)
{
    int res = 0;
    while(n--)
    {
        int temp = n;
        while(temp % p == 0)
        {
            res++;
            temp /= p;
        }
    }
    return res;
}

int main(){
    quick();
    ll n;
    int p;
    cin >> n >> p;
    cout << solve(n,p);
}
/*

*/