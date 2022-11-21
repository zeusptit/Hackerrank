#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    string s; cin >> s; s += s[s.size()-1];
    int cnt = 1, res = 1;
    string tmp = "";
    tmp += s[0];
    string ans = "";
    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i - 1]){
            ++cnt;
            tmp += s[i];
        }
        else{
            if(cnt > res){
                res = cnt;
                ans = tmp;
            }
            else if(cnt == res){
                if(tmp > ans){
                    ans = tmp;
                }
            }
            cnt = 1; tmp = "";
            tmp += s[i];
        }
    }
    
    cout << ans << endl;
}
