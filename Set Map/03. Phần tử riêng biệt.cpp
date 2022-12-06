#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 

int main()
{
    quick();
    map<int,int>mp;
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int x:a)
    {
        if(mp[x])
        {
            cout<<x<<" ";
            mp[x]=0;
        }
    }
}
