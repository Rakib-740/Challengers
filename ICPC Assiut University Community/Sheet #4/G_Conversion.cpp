#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    getline(cin, s);

    for(char c : s)
    {
        if(c == ',')
        {
            cout << " ";
            continue;
        }
        if(c >= 'a' && c <= 'z')
        {
            c = toupper(c);
        }
        else
        {
            c = tolower(c);
        }
        cout << c;
    }
    return 0;
}