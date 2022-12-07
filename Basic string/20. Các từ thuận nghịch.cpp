#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool check(string s)
{
    int n = s.length();
    for(int i = 0;i < n;i++)
        if(s[i] != s[n - i - 1])return false;
    return true;
}

 int main(){
    quick();
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string temp;
    set<string> se;
    while(ss >> temp)
    {
        if(check(temp))
            se.insert(temp);
    }
    for(string x : se)
        cout << x << " ";
}
/*

*/