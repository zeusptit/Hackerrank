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
    sort(p, p + n, [](pair<int,int> a, pair<int,int> b)-> bool{
        return a.first < b.first;
    });
    ll res = p[0].second + p[0].first, temp = res;
    for(int i = 1; i < n; i++)
    {
        if(p[i].first >= temp)
        {
            temp = p[i].second + p[i].first;
        }else{
            temp += p[i].second;
        }
        res = temp;
    }
    cout << res;
}
/*

*/