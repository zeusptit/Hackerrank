#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    for(int i = 0; i < n; i++)
    {
        if(i % 2)
        {
            for(int j = n - 1; j >= 0; j--)
                cout << a[i][j] << ' ';
        }else{
            for(int j = 0; j < n; j++)
                cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
/*

*/