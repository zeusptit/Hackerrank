#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int Tien[11] = {1000,500,200,100,50,20,10,5,2,1};

int main() {
    quick();
    ll n;
    cin >> n;
    ll cnt = 0;
    for(int i = 0; i < 10; i++)
    {
        if(n >= Tien[i] && n)
        {
            cnt += n/Tien[i];
            n %= Tien[i];
        }
    }
    cout << cnt;
}