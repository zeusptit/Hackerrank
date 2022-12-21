#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s;
    cin >> s; 
    vector<int> v;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1')
        {
            int j = i + 1;
            while(s[j] == '1' && j < s.length()) j++;
            v.pb(j - i);
            i = j;
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(i % 2 == 0)
            ans += v[i];
    }
    cout << ans;
}
/*

*/