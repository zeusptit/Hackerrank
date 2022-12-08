#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n], cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(!a[i]) cnt++;
    }
    for(int x : a)if(x)cout << x << ' ';
    while(cnt--)cout << 0 << ' ';
}
/*

*/