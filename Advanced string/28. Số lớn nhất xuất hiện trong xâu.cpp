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
bool cmp(string a,string b)
{
    if(a.length() != b.length())
        return a.length() > b.length();
    return a > b;
}
int main() 
{
    quick();
    string s;
    cin >> s;
    int n = s.size();
    string temp = "";
    vector<string>v;
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
    sort(v.begin(),v.end(),cmp);
    if(kt)cout << v[0];
    else cout << "0";
    }
/*

*/