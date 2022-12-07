#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool cmp(string a,string b)
{
    if(a.length() != b.length())
        return a.length() < b.length();
    else return a < b;
}
 int main(){
    quick();
    string s;
    getline(cin,s);
    vector<string>v;
    stringstream ss(s);
    string temp;
    while(ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    for(string x:v)cout << x << " ";
}
/*

*/