#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        string t; cin >> t;
        if(t == "abc")
        {
            cout << "YES" << endll;
            continue;
        }
        string s = t;
        swap(s[0], s[1]);
        if(s == "abc")
        {
            cout << "YES" << endll;
            continue;
        }
        s = t;
        swap(s[1], s[2]);
        if(s == "abc")
        {
            cout << "YES" << endll;
            continue;
        }
        s = t;
        swap(s[0], s[2]);
        if(s == "abc")
        {
            cout << "YES" << endll;
            continue;
        }
        cout << "NO" << endll;
    }
    return 0;
}