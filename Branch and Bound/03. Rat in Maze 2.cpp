#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int a[100][100],n;
bool check = false;

pair<int,int> p[] = {{1, 0}, {0, -1}, {0, 1}, {-1, 0}};
string path ="DLRU";
void in()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j, string s)
{
    if(i == n && j == n)
    {
        check = true;
        cout << s << endl;
        return;
    }

    for(int k = 0; k < 4; k++)
    {
        int inew = i + p[k].first;
        int jnew = j + p[k].second;
        if(inew >= 1 && inew <= n && jnew >= 1 && jnew <= n && a[inew][jnew])
        {
            a[inew][jnew] = 0;
            s += path[k];
            Try(inew, jnew, s);

            a[inew][jnew] = 1;
            s.pop_back();
        }
    }
    
}
int main(){
    quick();
    in();
    if(a[1][1] = 1)
    {
        a[1][1] = 0;
        Try(1,1,"");
        if(!check)
            cout << - 1;
    }else
        cout << -1;
}
/*

*/