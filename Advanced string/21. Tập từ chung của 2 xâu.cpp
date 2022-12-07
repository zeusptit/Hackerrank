#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
    quick();
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(char &x : s1)x = tolower(x);
    for(char &x : s2)x = tolower(x);
    map<string,int>mp1,mp2;
    stringstream ss(s1);
    string temp;
    while(ss >> temp)
        mp1[temp] = 1;

    stringstream s(s2);
    while(s >> temp)
        mp2[temp] = 1;
    for(auto it : mp1)
    {
        if(mp2[it.first])
        {
            cout << it.first << " ";
        }
    }
}
   