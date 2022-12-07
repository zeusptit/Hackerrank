#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


bool check(string s)
{
    int n = s.size();
    if(n == 1 && stoi(s) == 0)return true;
    int sum = s[n - 2] - '0';
    sum = sum * 10 + s[n - 1] - '0';
    if(sum == 0)return true;
    if(sum % 25 != 0)
        return false;
    return true;
}

int main()
{
    quick();
    string s;
    cin >> s;
    if(check(s))cout << "YES";else cout << "NO";
}