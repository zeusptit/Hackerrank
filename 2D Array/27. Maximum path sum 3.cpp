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
            //a[j][i]
            if(i == 0)
                continue;
            else if(j == 0)
                a[j][i] += max(a[j + 1][i - 1], a[j][i - 1]);
            else if(j == n - 1)
                a[j][i] += max(a[j - 1][i - 1], a[j][i - 1]);
            else
                a[j][i] += max(a[j][i - 1], max(a[j + 1][i - 1], a[j - 1][i - 1]));
        }
    }
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++)
        max_val = max(max_val, a[i][n - 1]);
    cout << max_val ;
}
/*

*/