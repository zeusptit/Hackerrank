#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool cmp(string a,string b)
{
        return a.size() < b.size();
}
bool check(string s)
{
    int n = s.size();
    for(int i = 0; i < n; i++)
        if(s[i] != s[n - i - 1])
            return false;
    return true;
}
int main(){
    quick();
    string s;
    vector<string>v;
    getline(cin,s);
    set<string>se;
    stringstream ss(s);
    string temp;
    while(ss >> temp)
        if(check(temp) && se.count(temp) == 0)
        {
            v.push_back(temp);
            se.insert(temp);
        }
    stable_sort(v.begin(),v.end(),cmp);
    for(auto x : v)cout << x << " ";
}
/*

*/