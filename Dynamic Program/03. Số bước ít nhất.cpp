#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<int> v;
    for(int x : a){
        auto it = lower_bound(v.begin(), v.end(), x);
        if(it == v.end())
            v.push_back(x);
        else
            *it = x;
    }
    cout << n - v.size();
}
/*

*/