#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s1,s2;
    cin >> s1 >> s2;
    set<char>hop;
    map<char,int>giao;
    for(char x:s1)
    {
        hop.insert(x);
        giao[x] = 1;
    }
    for(char x : s2)
    {
        hop.insert(x);
        if(giao[x] == 1)
            giao[x] = 2;
    }
    for(char x : hop)
        if(giao[x] == 2)
            cout << x;
    cout << endl;
    for(char x : hop)
        cout << x;
}
/*

*/