#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

void solve(string &s)
{
    int index = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] != '0')
        {
            index = i;
            break;
        }
    s.erase(s.begin(),s.begin() + index);
}
string pls(string x,string y)
{
    while(y.length() < x.length()) y = '0' + y;
    while(x.length() < y.length()) x = '0' + x;
    int n = x.length(),m = y.length();
    string res = "";
    int temp = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        int k = x[i] + y[i] -'0' -'0'+ temp;
        if(k > 9)
        {
            temp = 1;
            res = char(k % 10 + '0') + res;
        }else{
            temp = 0;
            res = char(k + '0') + res;
        }
    }
    if(temp > 0)res = "1" + res;
    return res;
}
int main() 
{
    quick();
    string s;
    cin >> s;
    int n = s.size();
    string temp = "";
    vector<string> v;
    int kt = 0;
    for(int i = 0; i < n; i++)
    {
        if(isdigit(s[i]))
        {
            temp += s[i];
            if(s[i] != '0')kt = 1;
        }
        else{
            if(temp != "")
            {
                solve(temp);
                v.push_back(temp);
                temp = "";
            }
        }
        if(i == s.size() - 1)
        {
            solve(temp);
            v.push_back(temp);
        }
    }
    string res = "0";
    for(auto it : v)
    {
        res = pls(res,it);
    }
    if(kt)cout << res;
    else cout << "0";
}
/*

*/