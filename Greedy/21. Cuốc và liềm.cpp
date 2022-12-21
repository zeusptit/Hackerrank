#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int a,b; cin >> a >> b;
    cout << min({a, b, (a + b) / 3});
}
/*

*/