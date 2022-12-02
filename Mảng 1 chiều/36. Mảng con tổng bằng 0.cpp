#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int solve(int a[],int n)
{
   unordered_set<ll>se;
   ll sum = 0;
   for(int i = 0; i < n; i++)
   {
        sum += a[i];
        if(sum == 0 || se.find(sum) != se.end())
        {
            return 1;
        }
        se.insert(sum);
   }
   return -1;
}
int main()
{
    quick();
    int n;cin >> n ;
    int a[n];
    for(int &x : a)cin >> x;
    cout << solve(a,n);
}
/*

*/