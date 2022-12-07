#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s1,s2;
    cin >> s1 >> s2;
    set<char>r1,r2;
    for(char x : s1)r1.insert(x);
    for(char x : s2)r2.insert(x);
    for(char x : r1)if(r2.find(x) != r2.end())continue;else cout << x;
    cout << endl;
    for(char x : r2)if(r1.find(x) != r1.end())continue;else cout << x;
}
/*

*/