#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s, t; cin >> s >> t;

    reverse(s.begin(), s.end());

    if(s == t)
    {
        cout << "YES" << endll;
    }
    else
    {
        cout << "NO" << endll;
    }
    return 0;
}