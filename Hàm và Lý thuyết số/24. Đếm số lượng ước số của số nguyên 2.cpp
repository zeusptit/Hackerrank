#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    ll n;
    cin >> n;
    for(ll i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                n /= i;
                cnt++;
            }
            res *= cnt + 1;
        }
    }
    if(res % 2)cout << "YES";
    else cout << "NO";
}
/*

*/