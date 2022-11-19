#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int sum(int m)
{
    int sum = 0;
    while(m)
    {
        sum += m % 10;
        m =/ 10;
    }
    return sum;
}

int check(int n)
{
    int sum1 = sum(n);
    int sum2 = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(!(n % i))
        {
            while(!(n % i))
                n /= i;
            sum2 += sum(i);
        }
    }
    if(sum1 != sum2)return 0;
    return 1;
}

bool isPrime(int n)
{
    for(int i = 2;i <= sqrt(n); i++)
        if( n % i == 0)
            return false;
    return n > 1;
}

int main(){
    quick();
    int n;
    cin >> n;
    if(!isPrime(n) &&  check(n))
        cout << "YES";
    else 
        cout << "NO";
}
/*

*/