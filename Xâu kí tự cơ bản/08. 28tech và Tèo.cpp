#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

 int main(){
    quick();
    string s;
    char t[]={'2','8','t','e','c','h'};
    cin >> s;
     int d[10001];
    int n = s.size();
    vector<int> v;
    for(int i = 0;i < n;i++)d[(int)s[i]] = 1;
    int cnt = 0;
    for(int j = 0;j < 6; j++)
    {
        for(int i = 0;i < n; i++)
        {
            if(s[i] == t[j])
            {
                d[(int)s[i]] = 0;
                cnt++;
            }
        }
    }
    if(cnt == n)
        cout << "EMPTY";
     else 
         for(int i = 0;i < n; i++)
             if(d[(int)s[i]])cout << s[i];
}
/*

*/