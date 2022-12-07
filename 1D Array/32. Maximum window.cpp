#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int main(){
    quick();
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    multiset<int>se;
    for(int i = 0; i < k; i++)se.insert(a[i]);
    
    for(int i = 1; i <= n - k; i++)
    {
        auto it1 = se.begin(), it2 = se.end();
        it2--;
        cout << *it1 << ' ' << *it2 << endl;
        auto x = se.find(a[i - 1]);
        se.erase(x);
        se.insert(a[i + k - 1]);
    }
    auto it1 = se.begin(),it2 = se.end();
    it2--;
    cout << *it1 << ' ' << *it2 << endl;
}
/*

*/