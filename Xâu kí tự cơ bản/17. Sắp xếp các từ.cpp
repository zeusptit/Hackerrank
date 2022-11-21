#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

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
    sort(v.begin(),v.end());
    for(string x : v)cout << x << " ";
    cout << endl;
    reverse(v.begin(),v.end());
    for(string x : v)cout << x << " ";
}
/*

*/