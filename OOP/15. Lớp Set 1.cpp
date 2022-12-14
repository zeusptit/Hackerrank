#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

class intSet{
    private:
        int n, a[100];
    public:
        int solve(int n)
        {
            return this->n = n;
        }
        void in()
        {
            for(int i = 0; i < n; i++)cin >> a[i];
        }
        void out(intSet another)
        {
            map<int,int>mp;
            for(int i = 0; i < n; i++)mp[a[i]] = 1;
            for(int i = 0; i < another.n; i++)
                if(mp[another.a[i]] == 1)
                    mp[another.a[i]] = 2;
            for(auto it:mp)
                if(it.second == 2)
                    cout << it.first << ' ';
        }
};
int main(){
    quick();
    intSet a,b;
    int n,m;
    cin >> n >> m;
    a.solve(n);
    b.solve(m);
    a.in();
    b.in();
    a.out(b);
}
/*

*/