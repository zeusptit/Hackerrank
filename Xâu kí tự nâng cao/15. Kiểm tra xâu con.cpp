#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s;
    vector<string>v;
    getline(cin,s);
    string temp;
    getline(cin,temp);
    if(s.find(temp) != -1)cout<<"YES";else cout<<"NO";
}
/*
*/