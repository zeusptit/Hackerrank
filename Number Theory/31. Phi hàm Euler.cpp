#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

long solve(long n)
{
    long res = n;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
            }
            res -= res/i;
        }
    }
    if(n != 1)res -= res/n;
    return res;
}

int main(){
    quick();
    long n;
    cin >> n;
    cout << solve(n);
}
/*

*/