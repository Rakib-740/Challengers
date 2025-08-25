#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        int x, y;
        cin >> x >> y;
        if(x > y)
        {
            cout << y << " " << x << endll;
        }
        else
        {
            cout << x << " " << y << endll;
        }
    }
    return 0;
}