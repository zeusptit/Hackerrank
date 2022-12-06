#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n,k,s,cnt = 0,X[100];

void Try(int i,int sum,int dem)
{
    for(int j = X[i - 1] + 1; j <= n; j++)
    {
        X[i] = j;
        sum += j;
        dem += 1;
        if(sum == s && dem == k)
            cnt++;
        else if(sum < s && dem < k)
            Try(i + 1,sum,dem);
        sum -= j;
        dem -= 1;
    }
}


int main(){
    quick();
    cin >> n >> k >> s;
    Try(1,0,0);
    cout << cnt;
}
/*

*/