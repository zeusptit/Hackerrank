#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int binarySearch(ll a[],int l,int r,ll x)
{
    if(l <= r)
    {
        int mid = (l + r)/2;
        if(a[mid] == x)return mid;
        if(a[mid] > x)return binarySearch(a,l,mid - 1,x);
        else return binarySearch(a,mid + 1,l,x);
    }
    return -1;
}

int main()
{ 
    quick();
    int n;cin >> n;
    ll a[n + 1], b[n + 1];
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i] * a[i];
        if(a[i] != 1)check = 1;
    }
    int kt = 0;
    for(int i = 0; i < n; i++)
    {
        ll temp = a[i] * a[i];
        if(binarySearch(b,0,n - 1,temp))
        {
            kt = 1;
            break;
        }
    }
    if(kt == 1 && check == 1)cout << "YES";else cout << "NO";
}