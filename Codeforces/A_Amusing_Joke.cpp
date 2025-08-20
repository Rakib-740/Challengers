#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t, p;
    cin >> s >> t >> p;

    s += t;
    sort(s.begin(), s.end());
    sort(p.begin(), p.end());

    if(s == p)
    {
        cout << "YES" << endll;
    }
    else
    {
        cout << "NO" << endll;
    }
    return 0;
}