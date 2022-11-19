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

int main(){
    quick();
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        int k = sqrt(i);
        for(int j = 2; j <= k; j++)
        {
            int kt = 0;
            if(!(i % j) && (i % (j * j)) && isPrime(j))
            {
                kt = 1;
            }
        }
        if(!kt)cout << i << ' ';
    }
}
/*

*/