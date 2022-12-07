#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s;
    vector<string>v;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    set<string>se;
    map<string,int>mp;
    while(ss >> temp)
    {
        v.push_back(temp);
        se.insert(temp);
        mp[temp]++;
    }
    for(auto it : se)
        cout << it << " " << mp[it] << endl;
    cout << endl;
    for(auto x : v)
    {
        if(mp[x])
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}
/*
*/