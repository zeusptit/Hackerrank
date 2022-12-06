#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, x, X[100], a[100];
vector<vector<int>> ans;
void nhap()
{
    cin >> n >> x;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
}

void Try(int sum, int i, int pos)
{
    for(int j = pos; j <= n; j++)
    {
        if(sum + a[j] <= x)
        {
            sum += a[j];
            X[i] = a[j];
            if(sum == x)
            {
                vector<int> res(X + 1, X + i + 1);
                ans.pb(res);
            }else
                Try(sum, i + 1, j);
            sum -= a[j];
        }
    }
}
int main(){
    quick();
    nhap();
    Try(0, 1, 1);
    if(!ans.size())
    {
        cout << - 1;
        return 0;
    }
    cout << ans.size() << endl;
    for(auto it : ans)
    {
        cout << '{';
        for(int j = 0; j < it.size(); j++)
        {
            if(j != it.size() - 1)
                cout << it[j] << ' ';
            else
                cout << it[j] << '}' << endl;
        }
    }
}
/*

*/