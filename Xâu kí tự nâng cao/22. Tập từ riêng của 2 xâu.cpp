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
    set<string>se1,se2;
    stringstream ss(s1);
    string temp;
    while(ss >> temp)
        se1.insert(temp);
    stringstream s(s2);
    while(s >> temp)
        se2.insert(temp);
    for(auto it : se1)
    {
        if(se2.find(it) != se2.end())
        continue;
        else cout << it << " ";
    }
}
   