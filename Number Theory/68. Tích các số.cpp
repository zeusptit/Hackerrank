#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

vector<ll>p(1e9 + 1);
void init()
{
    for(int i = 0; i <= 1e8; i++)
    {
        p[i] = i * i;
    }
}
int main(){
    quick();
    init();
    int n;
    cin >> n;
    for(ll x : p)
    {
        if(n == x)
        {
            cout << x;
            return 0;
        }
    }
}
/*

*/