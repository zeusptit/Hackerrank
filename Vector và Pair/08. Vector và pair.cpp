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
    vector<pair<pair<int,int>,int>> v;
    for(int i = 0 ; i < n; i++)
    {
        pair<pair<int,int>,int> temp;
        cin >> temp.first.first >> temp.first.second >> temp.second;
        v.push_back(temp);
    }
    for(auto x : v)
    {
        cout << x.first.first + x.first.second + x.second << ' ';
    }
}
/*

*/