#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

string smallestNumber(int m,int s)
{
    if(s > 9 * m || (m > 1 && s == 0))
        return "-1";
    string res = "";
    s -= 1;
    vector<int>v(m);
    for(int i = m - 1; i > 0; i--)
    {
        if(s > 9)
        {
            v[i] = 9;
            s -= 9;
        }else{
            v[i] = s;
            s = 0;
        }
    }
    v[0] = s + 1;
    for(int i = 0; i < m; i++)
    {
        res.push_back(v[i] + '0');
    }
    return res;
}
string largestNumber(int m,int s)
{
    if(s > 9 * m || (m > 1 && s == 0))
        return "-1";
    string res = "";
    vector<int>v(m);
    for(int i = 0; i < m; i++)
    {
        if(s > 9)
        {
            v[i] = 9;
            s -= 9;
        }else{
            v[i] = s;
            s = 0;
        }
    }
    for(int i = 0; i < m; i++)
    {
        res.push_back(v[i] + '0');
    }
    return res;
}
int main() {
    quick();
    int m,s;
    cin >> m >> s;
    string sm = smallestNumber(m,s),lg = largestNumber(m,s);
    if(sm != "-1" || lg != "-1")cout << sm << endl << lg;
    else cout << "NOT FOUND";
}
   