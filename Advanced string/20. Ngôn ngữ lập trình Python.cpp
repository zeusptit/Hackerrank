#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s;
    cin >> s;
    string t = "python";
    int j = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == t[j])
            j++;
        if(j == 6)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
/*

*/