#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n,m;
    cin >> n >> m;
    set<int> se1,se2;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        se1.insert(x);
    }
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        se2.insert(x);
    }
    for(int x : se1)
        if(!se2.count(x))
            cout << x << ' ';
}
/*

*/