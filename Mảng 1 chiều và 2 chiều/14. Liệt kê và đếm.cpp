#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

struct Num{
    string n;
    int freq;
};

typedef struct Num num;

int check(string n)
{
    for(int i = 0; i < n.length() - 1; i++)
        if(n[i] > n[i + 1])
            return 0;
    return 1;
}

int find(num a[],int m,string temp)
{
    for(int i = 0; i < m; i++)
        if(a[i].n == temp)
            return i;
    return -1;
}

bool cmp(num a,num b)
{
    if(a.freq != b.freq)
        return a.freq > b.freq;
    else
        return stoi(a.n) < stoi(b.n);
}

int main(){
    quick();
    num a[10000];
    int k = 0;
    string s;
    while(cin >> s)
    {
        if(check(s))
        {
            int idx = find(a,k,s);
            if(idx == -1)
            {
                a[k].n = s;
                a[k].freq = 1;
                k++;
            }else{
                a[idx].freq++;
            }
        }
    }
    sort(a,a + k,cmp);
    for(int i = 0; i < k; i++)
        cout << a[i].n << ' ' << a[i].freq << endl;
}
/*

*/