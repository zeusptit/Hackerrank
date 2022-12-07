#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n,m,a[501][501],cnt;

pair<int,int> p[] = {{-1,0}, {0,-1}, {1,0}, {0,1}};

void Try(int i,int j)
{
    a[i][j] = 0;
    for(int k = 0; k < 4; k++)
    {
        int inew = p[k].first + i;
        int jnew = p[k].second + j;
        if(inew >= 0 && inew < n && jnew >= 0 && jnew < m && a[inew][jnew] == 1)
        {
            Try(inew,jnew); 
            cnt++;
        }
    }
}
int main(){
    quick();
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    int res = 0;cnt = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j])
            {
                Try(i,j);
            }
            res = max(res,cnt);
            cnt = 1;
        }
    }
    cout << res;
}
/*

*/