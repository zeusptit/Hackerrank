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



int main(){
    quick();
    sang();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        for(int i = 2; i <= n/2 ; i++)
        {
            if(prime[i] && prime[n - i])
                cout << i << ' ' << n - i << endl;
        }
    }
}
/*

*/