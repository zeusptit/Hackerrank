#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main()
{ 
    quick();
    int n,m;cin >> n >> m;
    int a[n + 1],b[m + 1];
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < m; i++)cin >> b[i];
    int i = 0, j = 0;
    vector<int> hop,giao;
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
            giao.push_back(a[i]);
            hop.push_back(b[j]);
            i++;
            j++;
        }else if(a[i] < b[j])
        {
            hop.push_back(a[i]);
            i++;
        }else{
            hop.push_back(b[j]);
            j++;
        }
    }
    while(i < n)
    {
        hop.push_back(a[i]);
        i++;
    }
    while(j < m)
    {
        hop.push_back(b[j]);
        j++;
    }
    for(int x : hop)
        cout << x << " "; 
    cout << endl;
     
    for(int x : giao)
        cout << x << " ";
}