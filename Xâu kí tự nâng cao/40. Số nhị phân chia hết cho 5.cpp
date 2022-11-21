#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

ll process(ll x,ll y)
{
    if(y == 0)return 1;
    if(y == 1)return x;
    if(y % 2 == 0)return process(x * x % 5,y/2) % 5;
    else return x * process(x * x % 5,y/2) % 5;
}
bool check(string s)
{
    int n = s.size();
    long long sum = 0;
    reverse(s.begin(),s.end());
    for(int i = 0; i < n; i++)
    {
        ll x = 2,y = i;
        int temp = s[i] - '0';
        sum += temp * process(x,y);
        sum %= 5;
    }
    if(sum != 0)return false;
    return true;
}

int main()
{
    quick();
    string s;
    cin >> s;
    if(check(s))cout<<"YES";else cout<<"NO";
}