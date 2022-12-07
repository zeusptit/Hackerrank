#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s;
    getline(cin,s);
    for(char x : s)
        cout << toupper(x);
    cout << endl;
    for(char x : s)
        cout << tolower(x);
}
/*

*/