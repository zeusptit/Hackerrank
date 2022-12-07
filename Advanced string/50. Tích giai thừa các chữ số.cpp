#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=10;

void solve(string s)
{
    int n = s.size();
    string temp = "";
    for(int i = 0; i < n; i++)
    {
        switch(s[i])
        {
            case'2':
                temp += "2";
                break;
            case'3':
                temp += "3";
                break;
            case'4':
                temp += "322";
                break;
            case'5':
                temp += "5";
                break;
            case'6':
                temp += "53";
                break;
            case'7':
                temp += "7";
                break;
            case'8':
                temp += "7222";
                break;
            case'9':
                temp += "7332";
                break;
            default:break;
        }
    }
    sort(temp.begin(),temp.end(),greater<char>());
    cout << temp;
}
 int main(){
    quick();
    string s;
    cin >> s;
    solve(s);
}
/*

*/