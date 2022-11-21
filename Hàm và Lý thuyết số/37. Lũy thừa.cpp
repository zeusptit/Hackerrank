#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    ll n;
    cin >> n;
    ll sum = n * (n + 1)/2;
    if(n % 2 == 0)
    {
        ll sum1 = (n + 2) * (n - 2)/4;
        cout << sum - sum1;
    }else{
        ll sum2 = (n + 1) * (n - 1)/4;
        cout << sum - sum2;
    }
}
/*

*/