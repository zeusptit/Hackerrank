#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

map<string,int>mp;

int main(){
    quick();
    string s;
    while(cin >> s) mp[s]++;
    int max_val = INT_MIN;
    for(auto it : mp)
        max_val = max(it.second, max_val);
    for(auto it : mp)
    {
        if(it.second == max_val)
        {
            cout << it.first;
            break;
        }
    }
}
/*

*/