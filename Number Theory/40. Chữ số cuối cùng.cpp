#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    ll n;
    cin >> n;
    if(n == 0)
        cout << 1 ;
    else if(n % 4 == 1)cout << 8;
    else if(n % 4 == 2)cout << 4;
    else if(n % 4 == 3)cout << 2;
    else if(n % 4 == 0)cout << 6;
}
/*

*/