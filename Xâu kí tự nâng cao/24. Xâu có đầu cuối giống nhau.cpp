#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

ll C(int k,int n)
{
    if(k==0||k==n)return 1;
    if(k==1)return n;
    return C(k-1,n-1)+C(k,n-1);
}
int main() {
    quick();
    string s;
    cin >> s;
    map<char,int>mp;
    vector<char>v;
    for(char &x : s)
    {
        mp[x]++;
        v.push_back(x);
    }
    ll tmp = v.size();
    for(auto it : mp)
    {
        if(mp[it.first] > 1)
        {
            tmp += C(2,it.second);
        }
    }
    cout << tmp;
}
   