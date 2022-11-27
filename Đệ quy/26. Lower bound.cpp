#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int res = -1;

int search(int a[],int l,int r,int x)
{
    if(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] >= x)
        {
            res = m;
            return search(a,l,m - 1,x);
        }else{
            return search(a,m + 1,r,x);
        }
    }
    return res;
}

int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    int k; cin >> k;
    if(search(a, 0 , n - 1, k) == -1)
        cout << n;
    else
        cout << search(a,0,n - 1,k);
}
/*

*/