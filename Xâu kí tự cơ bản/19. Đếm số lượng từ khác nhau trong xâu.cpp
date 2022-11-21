#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


 int main(){
    quick();
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i = 0;i < n;i++)s[i] = tolower(s[i]);
    vector<string>v;
    stringstream ss(s);
    string temp;
    set<string> se;
    while(ss >> temp)
    {
        se.insert(temp);
    }
    cout << se.size();
}
/*

*/