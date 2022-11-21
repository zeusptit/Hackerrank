#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool check(string s)
{
    set<char>se;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
        se.insert(s[i]);
    }
    if(se.size() != 26)return false;
    return true;
}
int main(){
    quick();
    string s;
    cin >> s;
    if(check(s))cout << "YES" << endl;else cout << "NO" << endl;
}
/*

*/