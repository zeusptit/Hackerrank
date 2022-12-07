#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    long n;
    cin >> n;
    ll res = 2;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            res += 2;
        if(i * i == n)res -= 1;
    }
    cout << res;
}
/*

*/