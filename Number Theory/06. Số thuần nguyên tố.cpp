#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int isPrime(int n)
{
    for(int i = 2;i <= sqrt(n); i++)
        if( n % i == 0)
            return 0;
    return n > 1;
}

int check(int n)
{
    int m = n;
    int sum = 0;
    while(n)
    {
        int temp = n % 10;
        if(temp != 2 && temp != 3 && temp != 5 && temp != 7)return 0;
        n /= 10;
        sum += temp;
    }
    if(!isPrime(sum))return 0;
    if(!isPrime(m))return 0;
    return 1;
}


int main(){
    quick();
    int n,m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = n; i <= m; i++)
        if(check(i))
            cnt++;
    cout << cnt << endl;
}
/*

*/