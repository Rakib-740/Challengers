#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s, n; cin >> s >> n;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(n.begin(), n.end(), n.begin(), ::tolower);

    if(s > n)
    {
        cout << "1" << endll;
    }
    else if(n > s)
    {
        cout << "-1" << endll;
    }
    else
    {
        cout << "0" << endll;
    }
    return 0;
}