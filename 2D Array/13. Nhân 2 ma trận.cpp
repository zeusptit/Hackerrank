#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
int main()
{
    quick();
    int n,m,p; cin >> n >> m >> p;
    ll a[1000][1000],b[1000][1000],c[1000][1000];
    for(int i = 0;i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    for(int i = 0;i < m; i++)
        for(int j = 0; j < p; j++)
                cin >> b[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < p; j++)
        {
            for(int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}