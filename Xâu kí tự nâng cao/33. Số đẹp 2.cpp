#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


bool check(string s)
{
    int kt = 0;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(s[i] != s[n - i - 1])return false;
        if(s[i] == '6')kt = 1;
    }
    if(!kt)return false;
    return true;
}
int main()
{
    quick();
    string s;
    cin >> s;
    if(check(s))cout << "YES";else cout << "NO";
}