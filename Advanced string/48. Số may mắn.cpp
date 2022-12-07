#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=10;

void solve(string &str)
{
    int s = 0;
    for(int i = 0; i < str.length(); i++)
        s += (str[i] - '0');
    str = to_string(s);
}
 int main() 
{ 
    quick();
    int test;
    string str;
    cin >> str;
    while(str.length() > 1)
    {
        solve(str);
    }
    if(str == "9")cout << "YES" << endl;else cout << "NO" << endl;
}