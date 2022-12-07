#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


int main(){
    quick();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;int cnt = 0;
    while(ss >> temp)
        cnt++;
    cout << cnt;
}
/*

*/