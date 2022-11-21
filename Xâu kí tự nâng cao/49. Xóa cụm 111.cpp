#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=10;

 int main(){
    quick();
    string s;
    cin >> s;
    int cnt = 0;
    while(s.find("111") != string::npos)
    {
        auto it = s.find("111");
        s.erase(s.begin() + it,s.begin() + it + 3);
    }
    if(s.size())cout << s;
    else cout << "EMPTY";
}
/*

*/