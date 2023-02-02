#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    map<int,int> mp;
    int n; cin >> n;
    mp[0] = 1;
    int chan = 0, le = 0, res = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x % 2)le++;
        else chan++;
        if(mp.find(chan - le) != mp.end())
        {
            res += mp[chan - le];
        }
        mp[chan - le]++;
    }
    cout << res;
}
/*

*/