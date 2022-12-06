#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 

int main()
{
    quick();
    set<int>se;
    int n;cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;cin >> x;
        se.insert(x);
    }
    int q;cin >>q;
    while(q--)
    {
        int k;cin >> k;
        if(se.find(k)!=se.end())
        cout<<"YES"<<endl;else cout<<"NO"<<endl;
    }
}
