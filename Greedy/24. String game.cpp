#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s; cin >> s;
    map<char,int> mp;
    for(char x : s)mp[x]++;
    int odd = 0;
    for(auto i : mp)
        if(i.second % 2)
            odd++;
    if(odd % 2 == 0)
        cout << '2';
    else
        cout << '1';
}
/*

*/