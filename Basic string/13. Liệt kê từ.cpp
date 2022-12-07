#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


 int main(){
    quick();
    string s;
    getline(cin,s);
    string temp;
    vector<string> v;
    for(int i = 0; i < s.length(); i++)if(!isalpha(s[i]))s[i] = ' ';
    stringstream ss(s);
    while(ss >> temp)
    {
        v.push_back(temp);
    }
    for(int i = 0; i < v.size(); i++)
        if(i != v.size() - 1)
            cout << v[i] << ' ';
        else 
            cout << v[i];
}
/*

*/