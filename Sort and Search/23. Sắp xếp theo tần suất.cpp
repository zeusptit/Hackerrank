#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

bool cmp1(pair<int,int> a, pair<int,int> b)
{
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

bool cmp2(pair<int,int> a, pair<int,int> b)
{
    return a.second > b.second;
}

void solve1(vector<pair<int,int>> v)
{
    sort(v.begin(), v.end(), cmp1);
    for(auto x : v)
        cout << x.first << ' ';
    cout << endl;
}

void solve2(vector<pair<int,int>> v)
{
    map<int,int> mp;
    for(auto x : v)mp[x.first] = 1;
    stable_sort(v.begin(), v.end(), cmp2);
    for(auto x : v)
    {
        if(mp[x.first])
        {
            for(int i = 1; i <= x.second; i++)
                cout << x.first << ' ';
            mp[x.first] = 0;
        }
    }
}

int d[1000000] = {0};
int main(){
    quick();
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        d[a[i]]++;
    }
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++)
    {
        pair<int,int> p;
        p.first = a[i];
        p.second = d[a[i]];
        v.push_back(p);
    }
    solve1(v);
    solve2(v);
}
/*

*/