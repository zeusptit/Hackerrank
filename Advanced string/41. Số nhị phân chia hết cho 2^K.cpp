#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

bool check(string s)
{
    if(s.size() == 1 && (stoi(s) % 2 == 1))return false;
    else if((s[s.size() - 1] - '0') % 2 == 1)return false;
    return true;
}
string dv(string &s)
{
    int n = s.size();
    int temp = 0,i = 0;
    string res = "";
    while(i < n)
    {
        int k = s[i] - '0' + temp * 10;
        if(k == 1)
        {
            k = k * 10 + s[i + 1] - '0';
            i++;
        }
        if(k % 2)
        {
            res += (k/2 + '0');
            temp = 1;
        }else{
            res += (k/2 + '0');
            temp = 0;
        }
        i++;
    }
    s = res;
    return s;
}
 int main(){
    quick();
    string s;
    int k;
    cin >> s >> k;
    while(check(s) && k--)
    {
        dv(s);
    }
    if(k > 0)cout<<"NO";else cout<<"YES";
}
/*

*/