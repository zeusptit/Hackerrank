#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{ 
    quick();
    int n,x;cin >> n >> x;
    int a[n];
    for(int &x : a)cin >>x;
    int res1 = -1, res2 =- 1,kt = 0;
    for(int i=0;i<n;i++)
    {
        if(!kt)
        {
            if(a[i] == x)
            {
                res1 = i + 1;
                kt = 1;
            }
        }
        if(a[i] == x)res2 = i + 1;
    }
    cout << res1 << " " << res2;
}