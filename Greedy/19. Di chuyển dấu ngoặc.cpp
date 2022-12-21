#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s; cin >> s;
    int cnt = 0, ans = 0;
    for(char x : s)
    {
        if(x == '(') cnt++;
        else cnt--;
        if(cnt < 0)
        {
            ans++;
            cnt++;
        }
    }
    cout << ans;
}
/*
)))((((())
*/