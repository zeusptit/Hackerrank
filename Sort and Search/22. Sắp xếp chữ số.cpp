#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    set<int> se;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        while(x)
        {
            se.insert(x % 10);
            x /= 10;
        }
    }
    for(int x : se)
        cout << x << ' ';
}
/*

*/