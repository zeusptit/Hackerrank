#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

ll check(string s,ll k)
{
    int n = s.size();
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = (sum * 10 + (s[i] - '0')) % k;
    }
    return sum;
}

int main()
{
    quick();
    string s;
    ll k;
    cin >> s >> k;
    cout<<check(s,k);
}