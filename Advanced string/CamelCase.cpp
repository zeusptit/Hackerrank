#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s;
    cin >> s;
    vector<string> v;
    string temp ="";
    temp += s[0];
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            v.pb(temp);
            temp = s[i];
        }else{
            temp += s[i];
        }
    }
    if(temp.size())v.pb(temp);
    cout << v.size();
}
/*

*/