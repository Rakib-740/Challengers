#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
         long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long mx = max({a, b, c});
        long long needed = (mx - a) + (mx - b) + (mx - c);

        if (n >= needed && (n - needed) % 3 == 0) 
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