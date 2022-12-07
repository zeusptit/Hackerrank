#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n][n],kt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mp[a[i][j]] == i)
                mp[a[i][j]] = i + 1;
        }
    }
    for(auto it : mp)
        if(it.second == n)
        {
            kt = 1;
            cout << it.first << ' ';
        }
    if(!kt)cout << "NOT FOUND";
}
/*

*/