#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);

    set<char> unique;
    for(int i = 1; i < s.size() - 1; i++)
    {
        if(s[i] != ',' && s[i] != ' ')
        {
            unique.insert(s[i]);
        }
    }

    cout << unique.size() << endll;
    return 0;
}