#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    string s = "codeforces";
    while(t--)
    {
        char a; cin >> a;
        bool find = false;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == a)
            {
                find = true;
                break;
            }
        }
        cout << (find ? "YES" : "NO") << endll;
    }
    return 0;
}