#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int main()
{
    quick();
    int n,m;cin >> n >> m;
    int a[n],b[m];
    for(int &x : a)cin >> x;
    for(int &x : b)cin >> x;
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == b[j])
            j++;
        if(j == m)break;
    }
    if(j == m)cout << "YES";else cout << "NO";
}
/*

*/