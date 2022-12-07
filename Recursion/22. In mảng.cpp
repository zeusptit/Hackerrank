#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

void solve1(int a[],int n,int k)
{
    if(k < 0)
        return;
    else{
        cout << a[n - k - 1] << ' ';
        solve1(a,n,k - 1);  
    }
}

void solve2(int a[],int n,int k)
{
    if(k == n)
        return;
    else{
        cout << a[n - k - 1] << ' ';
        solve2(a,n,k + 1);  
    }
}

int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    solve1(a,n,n - 1);
    cout << endl;
    solve2(a,n,0);
}
/*

*/