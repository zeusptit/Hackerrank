#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int res = 0;
    for(int i = 0; i <= n - 3; i ++)
    {
        for(int j = 0; j <= n - 3; j ++)
        {
            int sum = 0;
            for(int k = 0; k < 3; k++)
            {
                for(int l = 0; l < 3; l++)
                {
                    sum += a[i + k][j + l];
                }
            }
            res = max(res, sum);
        }
    }
    cout << res;
}
/*

*/