#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool cmp(string a,string b)
{
    return a + b > b + a;
}
int main() {
    quick();
    int n;cin >> n;
    vector<string>v;
    while(n--)
    {
        string s;cin >> s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    for(string x : v)cout << x;
}