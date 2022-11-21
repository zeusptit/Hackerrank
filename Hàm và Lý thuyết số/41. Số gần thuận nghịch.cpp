#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int check1(ll n)
{
    int d = n % 10,c = 0;
    while(n)
    {
        c = n % 10;
        n /= 10;
    }
    return d == 2 * c;
}

int check2(ll n)
{
    int d = n % 10,c = 0;
    while(n)
    {
        c = n % 10;
        n /= 10;
    }
    return d * 2 == c;
}

int check3(ll n)
{
    string x = to_string(n);
    for(int i = 1; i < x.length() - 1; i++)
        if(x[i] != x[x.length() - i - 1])
            return 0;
        return 1;
}

int main(){
    quick();
    ll n;
    cin >> n;
    if(check1(n) || check2(n))
    {
        if(check3(n))
            cout << "YES";
        else
            cout << "NO";
    }else{
        cout << "NO";
    }
}
/*

*/