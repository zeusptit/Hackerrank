#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[105][105];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1, cnt = 1, k = n * n - 1;
    while(k--)
    {
        for(int i = c1; i <= c2; i++) a[h1][i] = cnt++;
        h1++;
        for(int i = h1; i <= h2; i++) a[i][c2] = cnt++;
        c2--;
        for(int i = c2; i >= c1; i--) a[h2][i] = cnt++;
        h2--;
        for(int i = h2; i >= h1; i--) a[i][c1] = cnt++;
        c1++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}
/*

*/