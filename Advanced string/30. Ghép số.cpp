#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
 
void solve(string &s)
{
    int cnt = 0;
    for(int i = 0;i < s.size(); i++)
    {
        if(s[i] == '0') cnt++;
    }
    if(cnt == s.size())
    {
        s = "0";
        return;
    }
    int index = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] != '0')
        {
            index = i;
            break;
        }
    s.erase(0,index);
}
bool cmp(string a,string b)
{
    return a + b > b + a;
}
int main() 
{
    quick();
    string s;
    cin >> s;
    int n = s.size();
    string temp = "";
    vector<string>v;
    for(int i = 0; i < n; i++)
    {
        if(isdigit(s[i])) temp += s[i];
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
            if(temp != "")
            {
                solve(temp);
                v.push_back(temp);
            }
        }
    }   
    sort(v.begin(),v.end(),cmp);
    for(auto it : v) cout << it;
}