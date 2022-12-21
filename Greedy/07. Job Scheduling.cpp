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
    for(int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;
    sort(p, p + n, [](pair<int,int> a, pair<int,int> b)->bool{
        return a.second < b.second;
    });
    int res = 1, kt = p[0].second;
    for(int i = 1; i < n; i++)
    {
        if(p[i].first > kt)
        {
            res++;
            kt = p[i].second;
        }
    }
    cout << res;
}
/*

*/