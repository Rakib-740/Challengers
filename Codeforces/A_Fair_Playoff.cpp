#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(max(a,b) > min(c,d) && max(c,d) > min(a,b))
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