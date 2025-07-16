#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    while(n--)
    {
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);


        if(s == "yes")
        {
            cout << "YES" << endll;
        }
        else
        {
            cout << "NO" << endll;
        }
    }
    return 0;
}