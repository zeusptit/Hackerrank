#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


bool check(string s)
{
    if(s.length() == 1)
    {
        if((stoi(s)) % 4 != 0)
            return false;
    }else{
        int n = s.size();
        int sum = s[n - 2] - '0';
        sum = sum * 10 + s[n - 1] - '0';
        if(sum % 4 != 0)
            return false;
    }
    return true;
}

int main()
{
    quick();
    string s;
    cin >> s;
    if(check(s))cout << "YES";else cout << "NO";
}