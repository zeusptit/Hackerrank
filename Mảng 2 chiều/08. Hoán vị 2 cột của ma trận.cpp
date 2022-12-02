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

void out(int a[][505],int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main(){
    quick();
    int n;cin >> n;
    int a[505][505];
    in(a,n);
    int u,v;
    cin >> u >> v;
    for(int i = 0; i < n; i++)
    {
        swap(a[i][u - 1],a[i][v - 1]);
    }
    out(a,n);
}
/*
3
1 2 3
4 5 6
7 8 9
1 3
*/
