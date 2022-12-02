#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int d[3]={0};
int main()
{ 
    quick();
    int n;cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d[x]++;
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 1;j <= d[i]; j++)
        {
            cout << i << " ";
        }
    }
}