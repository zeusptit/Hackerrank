#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool cmp(string a,string b)
{
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a<b;
}
int main(){
    quick();
    string s;
    vector<string> v;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    while(ss >> temp)
        v.push_back(temp);
    sort(v.begin(),v.end());
    for(auto x : v)cout << x << " ";
    cout << endl;
    sort(v.begin(),v.end(),cmp);
    for(auto x : v)cout << x << " ";
}
/*

*/