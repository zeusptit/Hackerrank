#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n,m,a[101][101];

pair<int,int> p[] = {{-1,0}, {0,-1}, {1,0}, {0,1}, {-1,-1}, {-1,1}, {1,-1}, {1,1}};

int main(){
    quick();
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    int cnt = 0, kt;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            kt = 1;
            for(int k = 0; k < 8; k++)
            {
                int inew = p[k].first + i;
                int jnew = p[k].second + j;
                if(inew >= 0 && inew < n && jnew >= 0 && jnew < m)
                {
                    if(a[i][j] <= a[inew][jnew])
                        kt = 0;
                }
            }
            if(kt)cnt++;
        }
    }
    cout << cnt;
}
/*

*/