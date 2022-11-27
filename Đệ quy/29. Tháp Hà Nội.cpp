#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

vector<pair<int,int>> v;

void chuyen(int n,int a,int c)
{
    v.pb({a,c});
}

void thap(int n,int a, int b, int c)
{
    if(n == 1)
        chuyen(n, a, c);
    else
    {
        thap(n - 1, a, c, b);
        chuyen(n, a, c);
        thap(n - 1, b, a, c);
    }
}
int main(){
    quick();
    int n; cin >> n;
    int a = 1,b = 2, c = 3;
    thap(n, a, b , c);
    cout << v.size() << endl;
    for(auto x : v)
        cout << x.first << ' ' << x.second << endl;
}
/*

*/