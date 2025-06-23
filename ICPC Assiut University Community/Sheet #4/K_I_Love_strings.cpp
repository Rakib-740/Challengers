#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    while(n--)
    {
        string s, t; 
        cin >> s >> t;
        string o = "";
        int x1 = s.length();
        int x2 = t.length();
        int x = min(x1,x2);
        for(int i = 0; i < x; i++)
        {
            o += s[i];
            o += t[i];
        }
        o += s.substr(x) + t.substr(x);
        
        cout << o << endll;
    }
    return 0;
}