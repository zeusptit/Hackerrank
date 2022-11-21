#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int check(int n)
{
    string x = to_string(n);
    for(int i = 0; i < x.length(); i++)
        if(x[i] != x[x.length() - i - 1])
            return 0;
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)n /= i;
            cnt++;
        }
    }
    return cnt >= 3;
}

int main(){
    quick();
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        if(check(i))
            cout << i << ' ';
    }
}
/*

*/