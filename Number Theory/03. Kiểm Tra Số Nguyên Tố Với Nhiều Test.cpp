#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

bool prime[10000001];

void sang()
{
    for(int i = 0; i <= 10000000; i++)
        prime[i] = true;
    for(int i = 2; i <= sqrt(10000000);i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= 10000000; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void check(int n)
{
    while(n)
    {
        int temp = n % 10;
        if(temp != 2 || temp != 3 || temp != 5 || temp != 7 )
            return false;
        n /= 10;
    }
}

void solve(int a,int b)
{   
    int cnt = 0;
    for(int i = a; i <= b; i++)
    {
        if(check(i) && prime(i))
            cnt++;
    }
    cout << cnt;
}
int main(){
    quick();
    int a,b;
    sang();
    cin >> a >> b;
    solve(a,b);
}
/*

*/