#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 

int main()
{
    quick();
    int n,m;cin >> n >> m;
    int a[1000][1000];
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            v.push_back(a[i][j]);
        }
    }
    sort(v.begin(),v.end());
    int min = v[0], max = v[v.size() - 1];
    cout << min << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == min)
                cout << i + 1 << " " << j + 1 << endl;
        }
    }
    cout << max << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == max)
                cout << i + 1 << " " << j + 1 << endl;
        }
    }
}
