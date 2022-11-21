#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

bool pN(int n)
{
    for(int i = 2;i <= sqrt(n); i++)if(n % i == 0)return false;
    return n > 1;
}
bool check(string s)
{
    int sum = 0;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(!pN(s[i] - '0'))return false;
        sum += s[i] - '0';
    }
    if(!pN(sum))return false;
    return true;
}
int main()
{
    quick();
    string s;
    cin >> s;
    if(check(s))cout << "YES";else cout << "NO";
}