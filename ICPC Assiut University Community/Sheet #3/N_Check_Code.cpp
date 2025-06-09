#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int a, b; cin >> a >> b;
    string s; cin >> s;

    if(s.length() != a + b + 1 || s[a] != '-')
    {
        cout << "No" << '\n';
        return 0;
    }

    for (int i = 0; i < s.length(); i++) 
    {
        if (i == a) continue;
        if (!isdigit(s[i])) 
        {
            cout << "No" << '\n';
            return 0;
        }
    }
    cout << "Yes" << '\n';
    return 0;
}