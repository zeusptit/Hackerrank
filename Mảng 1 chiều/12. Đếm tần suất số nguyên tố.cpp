#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int primeNumber(int n)
{
    if(n < 2)return 0;
    for(int i = 2; i <= sqrt(n);i++)if(n % i == 0)return 0;
    return 1;
}
int main()
{ 
    quick();
    vector<int> v;
    map<int,int> mp;
    int n;
    while(cin >> n)
    {
        if(primeNumber(n))
        {
            v.push_back(n);
            mp[n]++;
        }
    }
    for(int x : v)
    {
        if(mp[x])
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}