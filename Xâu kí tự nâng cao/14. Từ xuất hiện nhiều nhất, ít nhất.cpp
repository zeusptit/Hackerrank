#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s;
    vector<string> v;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    map<string,int>mp;
    while(ss >> temp)
    {
        v.push_back(temp);
        mp[temp]++;
    }
    int min = INT_MAX,max = INT_MIN;
    sort(v.begin(),v.end(),greater<string>());
    for(auto x : v)
    {
        if(max < mp[x])max = mp[x];
        if(min > mp[x])min = mp[x];
    }
    for(auto x : v)if(mp[x] == max){cout << x << " " << mp[x] << endl;break;}
    for(auto x : v)if(mp[x] == min){cout << x << " " << mp[x] << endl;break;}
}
/*
*/