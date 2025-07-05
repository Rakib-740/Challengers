#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;

    set<char> dLetter;

    for(char c : s)
    {
        dLetter.insert(c);
    }
    if(dLetter.size() & 1)
    {
        cout << "IGNORE HIM!" << endll;
    }
    else
    {
        cout << "CHAT WITH HER!" << endll;
    }
    return 0;
}