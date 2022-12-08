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
    set<int> se;
    for(int &x : a)
    {
        cin >> x ;
        se.insert(x);
    }
    sort(a, a + n);
    cout << a[n - 1] - a[0] + 1 - se.size();
}
/*

*/