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
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++)
    {
        pair<int,int> temp;
        cin >> temp.first >> temp.second;
        v.push_back(temp);
    }
    vector<double> final;
    for(auto x : v)
    {
        double temp = sqrt(x.first * x.first + x.second * x.second);
        final.push_back(temp);
    }
    for(auto x : final)
        cout << fixed << setprecision(2) << x << ' ';
}
/*

*/