#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

 int main(){
    quick();
    string s;
    cin >> s;
    set<char>se;
    int n=s.size();
     int kt=0;
    for(int i=0;i<n;i++)
    {
        if(se.find(s[i])!=se.end())
        {
            cout<<s[i];
            kt=1;
            break;
        }else
            se.insert(s[i]);
    }
     if(!kt)cout<<"NONE";
}
/*

*/