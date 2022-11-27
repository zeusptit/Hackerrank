#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{
    quick();
    int n,m; cin >> n >> m;
    int a[n + 1], b[m + 1];
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < m; i++)cin >> b[i];
    int i = 0, j = 0;
    while(i < n && j < m)
    {
        if(a[i] < b[j]){
            cout << a[i] << " ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }
    while(i < n)
    {
        cout << a[i] << " ";
        i++;
    }
    while(j < m)
    {
        cout << b[j] << " ";
        j++;
    }
}