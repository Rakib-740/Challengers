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

        if(a + b == 10 || a + b > 10)
        {
            cout << "YES" << endll;
        }
        else if(c + b == 10 || c + b > 10)
        {
            cout << "YES" << endll;
        }
        else if(a + c > 10 || a + c == 10)
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