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
    for(int i = 0; i < n; i++)
    {
        vector<int> v;
        for(int j = 0; j < n; j++)
            v.push_back(a[j][i]);
        sort(v.begin(),v.end());
        int k = 0;
        for(int j = 0; j < n; j++)
            a[j][i] = v[k++];
    }
    out(a,n);
}
/*
3
2 7 6
1 2 3
9 8 1
*/
