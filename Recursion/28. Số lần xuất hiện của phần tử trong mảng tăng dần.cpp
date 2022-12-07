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
    int a[n];
    for(int &x : a)cin >> x;
    int k; cin >> k;
    auto it = lower_bound(a , a + n , k);
    if(*it != k) cout << 0;
    else
    {
        auto p = upper_bound(a ,a  + n , k);
        --p;
        cout << distance(it , p) + 1;
    }
}
/*

*/