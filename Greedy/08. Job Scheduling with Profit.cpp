#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    pair<int,int> p[n];
    int x;
    for(int i = 0; i < n; i++)
        cin >> x >> p[i].first >> p[i].second;
    sort(p, p + n, [](pair<int,int> a, pair<int,int> b)->bool{
        return a.second > b.second;
    });
    int cnt[n] = {0};
    ll res = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = p[i].first - 1; j >= 0; j--)
        {
            if(!cnt[j])
            {
                res += p[i].second;
                cnt[j] = 1;
                break;
            }
        }
    }
    cout << res;
}
/*

*/