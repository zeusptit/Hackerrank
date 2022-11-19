#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

bool check(ll n)
{
    int temp = (int)sqrt(n);
    return 1ll * temp * temp == n;
}

int main(){
    quick();
    ll n;
    cin >> n;
    if(check(n))cout << "YES";
    else cout << "NO";
}
/*

*/