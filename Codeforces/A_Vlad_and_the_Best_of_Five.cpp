#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    
    while(t--)
    {
        int a = 0, b = 0;
        string s; cin >> s;
        for(char c : s) {
            if(c == 'A') a++;
            else if(c == 'B') b++;
        }
        cout << (a > b ? "A" : "B") << endll;
    }
    return 0;
}   