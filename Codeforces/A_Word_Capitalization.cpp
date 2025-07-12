#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;

    if(s[0] >= 'a' && s[0] <= 'z') s[0] = toupper(s[0]);

    cout << s << endll;
    return 0;
}