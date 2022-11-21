#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


bool check(string s)
{
    int n = s.size();
    int sc = 0,sl = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2)sl += s[i] - '0';
        else sc += s[i] - '0';
    }
    if(abs(sl - sc) % 11 != 0)return false;
    return true;
}

int main()
{
    quick();
    string s;
    cin >> s;
    if(check(s))cout<<"YES";else cout<<"NO";
}