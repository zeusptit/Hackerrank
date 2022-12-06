#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, a[100], X[100];
vector<string> res;

void nhap()
{
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> a[i];
}

void Try(int i, int pos)
{
    for(int j = pos; j <= n; j++)
    {
        if(X[i - 1] < a[j])
        {
            X[i] = a[j];
            if(i >= 2)
            {
                string tmp = "";
                for(int k = 1; k <= i; k++)
                    tmp += to_string(X[k]) + " ";
                res.pb(tmp);
            }
            Try(i + 1, j + 1);
        }
    }
}
int main(){
    quick();
    nhap();
    Try(1,1);
    sort(res.begin(), res.end());
    for(string x : res)
        cout << x << endl;
}
/*

*/