#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int Tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int main(){
    quick();
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < 10; i++)
    {
        cnt += n / Tien[i];
        n %= Tien[i];
    }
    cout << cnt;
}
/*

*/