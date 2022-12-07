#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

 int main(){
    quick();
    string s;
    cin >> s;
    if (s[1] == '/') s = "0" + s;
    if (s[4] == '/') s.insert(3, "0");
    cout<<s;
}
/*

*/