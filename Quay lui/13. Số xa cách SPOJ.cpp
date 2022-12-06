#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, X[100], a[100];

void out()
{
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

int check()
{
    for(int i = 1; i <= n - 1; i++)
        if(abs(a[i] - a[i + 1]) == 1)
            return 0;
    return 1;
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!X[j])
        {
            a[i] = j;
            X[j] = 1;
            if(i == n && check())
                out();
            else
                Try(i + 1);
            X[j] = 0;
        }
    }
}


int main(){
    quick();
    cin >> n;
    Try(1);
}
/*

*/