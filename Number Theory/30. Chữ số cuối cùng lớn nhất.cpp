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

int check(int n)
{
    string x = to_string(n);
    int t = x.length();
    for(int i = 0; i < t -1 ; i++)
        if(x[t - 1] < x[i])
            return 0;
    return isPrime(n);
}


int main(){
    quick();
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(check(i))
        {
            cnt++;
            cout << i << ' ';
        }
    cout << "\n" << cnt;
}
/*

*/