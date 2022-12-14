#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

class WordSet{
    private:
        string s;
    public:
        void in()
        {
            getline(cin, s);
        }
        void out(WordSet another)
        {
            stringstream ss(s); string temp;
            stringstream sss(another.s);
            vector<string> v1, v2;
            while(ss >> temp)
                v1.pb(temp);
            while(sss >> temp)
                v2.pb(temp);
            set<string> se; map<string,int> mp;
            for(auto x : v1)
            {
                se.insert(x);
                mp[x] = 1;
            }
            for(auto x : v2)
            {
                se.insert(x);
                if(mp[x] == 1)mp[x] = 2;
            }
            for(auto x : se)cout << x << ' ';
            cout << endl;
            for(auto x : mp)
                if(x.second == 2)
                    cout << x.first << ' ';
        }
};
int main(){
    quick();
    WordSet a ,b;
    a.in(); b.in();
    a.out(b);
}
/*

*/