#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int main(){
    quick();
    ll n;
    cin >> n;
    map<char,int> mp;
    string x = to_string(n);
    for(char i : x)mp[x]++;
    for(auto it : mp)coutt << it.first << ' '<< it.second << endl;
    cout << endl;
    for(char i : x)
    {
        if(mp[i])
        {
            cout << i << ' ' << mp[i] << endl;
            mp[i] = 0;
        }
    }
}
/*

*/