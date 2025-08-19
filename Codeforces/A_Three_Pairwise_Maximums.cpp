#include <bits/stdc++.h>
using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) 
    {
        int x, y, z; 
        cin >> x >> y >> z;

        int mx = max({x, y, z});
        int cnt = (x==mx) + (y==mx) + (z==mx);

        if (cnt < 2) 
        {
            cout << "NO" << endll;
            continue;
        }

        cout << "YES" << endll;
        int s;
        if (x==mx && y==mx) 
        {            
            s = z;
            cout << mx << " " << s << " " << s << endll;
        } 
        else if (x==mx && z==mx) 
        {     
            s = y;
            cout << s << " " << mx << " " << s << endll;
        } 
        else 
        {              
            s = x;
            cout << s << " " << s << " " << mx << endll;
        }
    }
    return 0;
}
