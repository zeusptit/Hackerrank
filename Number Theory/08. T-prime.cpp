#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

bool isPrime(long n)
{
    for(int i = 2;i <= sqrt(n); i++)
        if( n % i == 0)
            return false;
    return n > 1;
}

int main(){
    quick();
    long n;
    cin >> n;
    for(long i = 2; i <= sqrt(n); i++)
    {
        if(isPrime(i))
            cout << i * i << ' ' ;
    }
}
/*

*/