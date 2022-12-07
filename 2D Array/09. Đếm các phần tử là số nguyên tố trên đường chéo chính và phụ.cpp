#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

void in(int a[][505],int n)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

int check(int n)
{
    if(n < 2)return 0;
    for(int i = 2; i <= sqrt(n); i++)if(n % i == 0)return 0;
    return 1;
}

int main(){
    quick();
    int n;cin >> n;
    int a[505][505];
    in(a,n);
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i)
            {
                if(check(a[i][j]))cnt++;
                if(check(a[i][n - j - 1]))cnt++;
                if(n % 2 == 1 && i == n/2)if(a[i][j] == a[i][n - j - 1] && check(a[i][j]))cnt--;
            }
        }
    }
    cout << cnt;
}
/*
4
1 2 3 4
5 6 7 8
9 10 1 2
2 3 5 7
*/
