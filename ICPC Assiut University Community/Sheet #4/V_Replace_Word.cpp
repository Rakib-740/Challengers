#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;
    string to_find = "EGYPT";
    string to_replace = " ";
    size_t pos =  0;

    while((pos = s.find(to_find, pos)) != string::npos)
    {
        s.replace(pos, to_find.length(), to_replace);
        pos += to_replace.length();
    }
    cout << s << endll;
    return 0;
}