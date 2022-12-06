#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 

int main()
{
    quick();
    multiset<int>se;
    int n;cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;cin >> x;
        se.insert(x);
    }
    int q;cin >> q;
    while(q--)
    {
        int k,x;
        cin >> k >> x;
        if(k==1)
        {
            se.insert(x);
        }else if(k==2)
        {
            if(se.find(x)!=se.end())
            {
                auto it=se.find(x);
                se.erase(it);
            }
        }else{
            if(se.find(x)!=se.end())    
            cout<<"YES"<<endl;else cout<<"NO"<<endl;
        }
    }
}
