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
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0)
                continue;
            else if(j == 0)
                a[i][j] += max(a[i - 1][j], a[i - 1][j + 1]);
            else if(j == n - 1)
                a[i][j] += max(a[i - 1][j - 1],a[i - 1][j]);
            else
                a[i][j] += max(a[i - 1][j], max(a[i - 1][j - 1], a[i - 1][j + 1]));
        }
    }
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++)
        max_val = max(max_val, a[n - 1][i]);
    cout << max_val ;
}
/*

*/