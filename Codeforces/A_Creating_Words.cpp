#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        string s, t; cin >> s >> t;

        swap(s[0], t[0]);

        cout << s << " " << t << endll;
    }
    return 0;
}