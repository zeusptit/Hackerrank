#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


int main(){
    quick();
    string s;
    set<string>se;
    map<string,int>mp;
    vector<string>v;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    while(ss >> temp)
    {
        se.insert(temp);
        mp[temp]++;
        v.push_back(temp);
    }
    for(auto it : se)
        cout << it << " ";
    cout << endl;
    for(string x : v)
    {
        if(mp[x])
        {
            cout << x << " ";
            mp[x] = 0;
    }
    }
}
/*

*/