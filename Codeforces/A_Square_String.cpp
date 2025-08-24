#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size() / 2;

        string s1 = s.substr(0, n - 0);
        string s2 = s.substr(n, s.size() - n);

        if(s1 == s2)
        {
            cout << "YES" << endll;
        }
        else
        {
            cout << "NO" << endll;
        }
    }
    return 0;
}