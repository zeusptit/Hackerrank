#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool check(string s)
{
    int n=s.size();
    for(int i=0;i<n;i++)
        if(!isupper(s[i]))
            return false;
    return true;
}
 int main(){
    quick();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    int cnt=0;
    while(ss >> temp)
    {
        if(check(temp))cnt++;
    }
    cout<<cnt;
}