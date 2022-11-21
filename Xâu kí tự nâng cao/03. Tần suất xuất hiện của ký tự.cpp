#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s;
    cin >> s;
    map<char,int>mp,mp1;
    for(char x : s){
        mp[x]++;
        mp1[x]++;
    }
    string temp = s;
    sort(temp.begin(),temp.end());
    for(char x : temp)
    {
        if(mp[x])
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
    }
    }
    cout << endl;
    for(char x : s)
    {
        if(mp1[x])
        {
            cout << x << " " << mp1[x] << endl;
            mp1[x] = 0;
    }
    }
}
/*

*/