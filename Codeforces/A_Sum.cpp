#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a + b == c)
        {
            cout << "YES" << endll;
        }
        else if(a + c == b)
        {
            cout << "YES" << endll;
        }
        else if(c + b == a)
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