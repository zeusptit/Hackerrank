#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 

int main()
{
    quick();
    int n,m;cin >> n >> m;
    int a[1000][1000];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    for(int i = 0; i < n; i++)
    {
        ll k = 0;
        for(int j = 0; j < m; j++)
        {
            k += a[i][j];
        }
        cout << k << " ";
    }
    cout << endl;
    for(int i = 0; i < m; i++)
    {
        ll k = 0;
        for(int j = 0; j < n; j++)
        {
            k += a[j][i];
        }
        cout << k << " ";
    }
}