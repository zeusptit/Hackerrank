#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int cnt = 1, n, s, t, a[100][100];

pair<int,int> p[] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

void Try(int i, int j)
{
    a[i][j] = 1;
    for(int k = 0; k < 4; k++)
    {
        int inew = p[k].first + i;
        int jnew = p[k].second + j;
        if(inew >= 0 && inew < n && jnew >= 0 && jnew < n && !a[inew][jnew])
        {
            cnt++;
            Try(inew, jnew);
        }
    }
}

int main(){
    quick();
    cin >> n >> s >> t;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    Try(s - 1, t - 1);
    cout << cnt;
}
/*

*/