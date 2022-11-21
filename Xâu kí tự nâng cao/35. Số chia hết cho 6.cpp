#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


bool check(string s)
{
    int n = s.size();
    if((s[n - 1] - '0') % 2 != 0)return false;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    if(sum % 3 != 0)return false;
    return true;
}

int main()
{
    quick();
    string s;
    cin >> s;
    if(check(s))cout << "YES";else cout << "NO";
}