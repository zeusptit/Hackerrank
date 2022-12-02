#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
bool pN(int n)
{
    for(int i = 2;i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return n > 1;
}
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
        for(int j = 0; j < m; j++)
        {
            if(pN(a[i][j]))
                cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
