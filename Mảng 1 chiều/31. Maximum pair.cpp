#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int main(){
    quick();
    int n;
    cin >> n;
    int a[n];
    for(int &x:a)cin >> x;
    sort(a,a+n);
    int tmp=abs(a[0]+a[n-1]),res=0;
    for(int i=0;i<n-1;i++)
    {
        int temp=abs(a[i]+a[i+1]);
        res=max(res,temp);
    }
    cout<<res;
}
/*

*/