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
    for(int i = 0; i <= n / 111; i++)
    {
        ll res = n - i * 111;
        if(res % 11 == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
/*

*/