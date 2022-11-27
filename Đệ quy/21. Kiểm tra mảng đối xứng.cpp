#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int flag = 0;

void solve(int a[],int n,int k)
{
    if(k == n / 2 ||k == n / 2 + 1)
        return;
    else{
        if(a[k] != a[n - k - 1])
        {
            flag = 1;
            return;
        }
        solve(a,n,k + 1);  
    }
}

int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    solve(a,n,0);
    if(!flag)
        cout << "YES";
    else
        cout << "NO";
}
/*

*/