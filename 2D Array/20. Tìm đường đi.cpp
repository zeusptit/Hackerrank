#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n,m,a[101][101],s,t,u,v;

pair<int,int> p[] = {{-1,0}, {0,-1}, {1,0}, {0,1}};

bool BFS(int s,int t)
{
    queue<pair<int,int>> q;
    q.push({s,t});
    a[s][t] = 0;
    while(!q.empty())
    {
        pair<int,int> temp = q.front(); q.pop();
        if(temp.first == u && temp.second == v)return true;
        for(int k = 0; k < 4; k++)
        {
            int inew = p[k].first + temp.first;
            int jnew = p[k].second + temp.second;
            if(inew >= 0 && inew < n && jnew >= 0 && jnew < m && a[inew][jnew])
            {
                q.push({inew,jnew});
                a[inew][jnew] = 0;
            }
        }
    }
    return false;
}

int main(){
    quick();
    cin >> n >> m;

    cin >> s >> t >> u >> v;
    s--; t--; u--; v--;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    if(BFS(s,t))cout << "YES";
    else cout << "NO";
}
/*

*/