#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s; cin >> s;
    map<int,int> mp;
    for(char x : s)mp[x]++;
    int min = 1e9, max = -1e9;
    char c1,c2;
    for(auto it : mp)
    {
        if(max < it.second)
        {
            c1 = it.first;
            max = it.second;
        }
        if(min >= it.second)
        {
            c2 = it.first;
            min = it.second;
        }
    }
    cout << c1 << ' ' << max << endl;
    cout << c2 << ' ' << min << endl;
    cout << mp.size();
}
/*

*/