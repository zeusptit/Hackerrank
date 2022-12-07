#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s;
    cin >> s;
    int n = s.length();
    string v = "";
    for(char x : s)if(x != '0')v += x;
    sort(v.begin(),v.end());
    if(!v.size())
        cout << 0;
    else
        cout << v;
}
/*

*/
