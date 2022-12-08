#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int search1(int a[],int l,int r,int x)
{
    int res = -1;
    while(l <= r)
    {
        int m = (l + r)/2;
        if(a[m] == x)
        {
            res = m;
            r = m - 1;
        }
        else if(a[m] > x) r = m - 1;
        else
            l = m + 1;
    }
    return res;
}

int search2(int a[],int l,int r,int x)
{
    int res = -1;
    while(l <= r)
    {
        int m = (l + r)/2;
        if(a[m] == x)
        {
            res = m;
            l = m + 1;
        }
        else if(a[m] > x) r = m - 1;
        else
            l = m + 1;
    }
    return res;
}

int search3(int a[],int l,int r,int x)
{
    int res = -1;
    while(l <= r)
    {
        int m = (l + r)/2;
        if(a[m] >= x)
        {
            res = m;
            r = m - 1;
        }else{
            l = m + 1;
        }
    }
    return res;
}

int search4(int a[],int l,int r,int x)
{
    int res = -1;
    while(l <= r)
    {
        int m = (l + r)/2;
        if(a[m] > x)
        {
            res = m;
            r = m - 1;
        }else{
            l = m + 1;
        }
    }
    return res;
}
int main(){
    quick();
    int n,X; cin >> n >> X;
    int a[n];
    for(int &x : a)cin >> x;
    cout << search1(a, 0, n - 1, X) << endl;
    cout << search2(a, 0, n - 1, X) << endl;
    cout << search3(a, 0, n - 1, X) << endl;
    cout << search4(a, 0, n - 1, X) << endl;
    if(search1(a, 0, n - 1, X) == - 1)
        cout << "0\n";
    else 
        cout << search2(a, 0, n - 1, X) - search1(a, 0, n - 1, X) + 1 << endl;
}
/*

*/