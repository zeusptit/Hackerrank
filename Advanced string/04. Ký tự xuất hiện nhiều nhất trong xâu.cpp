#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s;
    cin >> s;
    map<char,int> mp;
    vector<char>v;
    for(char x:s)
    {
        mp[x]++;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int max = INT_MIN,min = INT_MAX;
    for(char x : s)
    {
        if(mp[x] > max)max = mp[x];
        if(mp[x] < min)min = mp[x];
    }
    for(int i = v.size(); i >= 0; i--)
    {
        if(mp[v[i]] == max)
        {
            cout << v[i] << " " << max << endl;
            break;
        }
    }
    for(int i = v.size(); i >= 0; i--)
        if(mp[v[i]] == min)
            {
                cout << v[i] << " " << min << endl;
                break;
            }
}
/*

*/