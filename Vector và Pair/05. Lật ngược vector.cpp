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
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    int l,r;
    cin >> l >> r;
    reverse(v.begin(),v.end());
    for(int x : v)cout << x <<' ';
    cout << endl;
    if(l != r)
        reverse(v.begin() + l , v.begin() + r + 1);
    for(int x : v)cout << x << ' ';
}
/*

*/