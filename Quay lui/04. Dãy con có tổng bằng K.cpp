#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, a[100],k,X[100];

void in()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
}

void out(int k)
{
    cout << '[';
    for(int i = 1; i <= k; i++)
        if(i != k)
            cout << X[i] << ' ';
        else
            cout << X[i] << "]\n";
}

void Try(int i,int pos,int sum)
{   
    for(int j = pos; j <= n; j++)
    {
        X[i] = a[j];
        sum += X[i];
        if(sum == k)
            out(i);
        else if(sum < k)
            Try(i + 1, j + 1, sum);
        sum -= X[i];
    }
}
int main(){
    quick();
    in();
    Try(1, 1, 0);
}
/*

*/