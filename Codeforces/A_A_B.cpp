#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int a, b;
        a = s[0] - '0';
        b = s[2] - '0';

        cout << a + b << endll;
    }
    return 0;
}