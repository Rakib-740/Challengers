#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endll;
        } 
        else if (a < b) {
            if ((b - a) % 2 == 1)
                cout << 1 << endll;
            else
                cout << 2 << endll;
        } 
        else {
            if ((a - b) % 2 == 0)
                cout << 1 << endll;
            else
                cout << 2 << endll;
        }
    }

    return 0;
}