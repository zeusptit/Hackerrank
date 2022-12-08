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
    int i = 0, j = 0;
    while(i < n && j < m)
    {
        if(d[i] <= e[j])
        {
            cout << 'b' << i + 1 << ' ';
            i++;
        }else{
            cout << 'c' << j + 1 << ' ';
            j++;
        }
    }
    while(i < n)
    {
        cout << 'b' << i + 1 << ' ';
        i++;
    }
    while(j < m)
    {
        cout << 'c' << j + 1 << ' ';
        j++;
    }
}
/*

*/