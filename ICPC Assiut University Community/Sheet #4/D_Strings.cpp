#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    
    string s, k;
    getline(cin, s);
    getline(cin, k);

    cout << s.length() << " " << k.length() << '\n';

    string c = s + k;
    char temp = s[0];
    s[0] = k[0];
    k[0] = temp;
    
    cout << c << '\n' << s << " " << k << '\n';
    return 0;
}