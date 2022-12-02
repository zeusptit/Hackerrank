#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n;
    cin >> n;
    vector<int> c,l;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x % 2)l.pb(x);
        else c.pb(x);
    }
    sort(c.begin(),c.end());
    sort(l.begin(),l.end(),greater<int>());
    for(int x : l)cout << x << ' ';
    for(int x : c)cout << x << ' ';
}
/*

*/