#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

bool isPrime(int n)
{
    for(int i = 2;i <= sqrt(n); i++)
        if( n % i == 0)
            return false;
    return n > 1;
}

ll ans[10];
int n = 0;
void init()
{
    for(int i = 2; i <= 32; i++)
    {
        if(isPrime(i))
        {
            int tmp = (int)pow(2, i) - 1;
            if(isPrime(tmp))
            {
                ans[n++] = 1ll * tmp * (int)pow(2,i - 1);
            }
        }
    }
}

int main(){
    quick();
    ll m;
    cin >> m;
    init();
    for(int i = 0; i < n; i++)
        if(m == a[i])
        {
            cout << "YES";
            return 0;
        }
    cout << "NO";
}
/*

*/