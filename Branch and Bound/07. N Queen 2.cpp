#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int X[100],cot[100],xuoi[100],nguoc[100],n = 8,a[100][100];
int res = 0;

void init()
{
    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= 8; j++)
        {
            cin >> a[i][j];
        }
    }
}

void solve()
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += a[i][X[i]];
    res = max(sum,res);
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!cot[j] && !xuoi[i - j + n] && !nguoc[i + j - 1])
        {
            X[i] = j;
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
            if(i == n)
                solve();            
            else 
                Try(i + 1);
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
        }
    }
}

int main(){
    quick();
    init();
    Try(1);
    cout << res;
}
/*

*/