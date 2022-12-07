#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool check(string s)
{
    int n = s.size();
    for(int i = 0;i < n; i++)
    {
        if(s[i] != s[n - i - 1])
            return false;
    }
    return true;
}
int main(){
    quick();
    string s;
    cin >> s;
    if(check(s))cout<<"YES"<<endl;else cout<<"NO"<<endl;
}
/*

*/