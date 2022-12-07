#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; string s;
    cin >> n >> s;
    int cdt[5] = {0};
    string temp = "!@#$%^&*()-+";
    for(int i = 0; i < n; i++)
    {
        if(isdigit(s[i]))cdt[1] = 1;
        if(s[i] >= 'a' && s[i] <= 'z')cdt[2] = 1;
        if(s[i] >= 'A' && s[i] <= 'Z')cdt[3] = 1;
        if(temp.find(s[i]) != -1)cdt[4] = 1;
    }
    int r = 0;
    for(int i = 1; i <= 4; i++)r += cdt[i];
    r = 4 - r;
    if(n < 6)
    {
        int t = 6 - n;
        cout << max(t,r);
    }else{
        cout << r;
    }
}
/*

*/