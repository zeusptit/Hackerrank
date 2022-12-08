#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n,m; cin >> n >> m;
    int d[n], e[m];
    for(int &x : d)cin >> x;
    for(int &x : e)cin >> x;
    int cnt = 0, i = 0, j = 0;
    while(i < n && j < m)
    {
        if(d[i] > e[j])
        {
            cnt++;
            i++;
            j++;
        }else{
            i++;
        }
    }
    cout << cnt;
}
/*

*/