#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;  

    while (t--) {
        int n, x;
        cin >> n >> x;

        if (n <= 2) 
        {
            cout << 1 << endl;
        } 
        else 
        {
            int floor = ((n - 3) / x) + 2;
            cout << floor << endl;
        }
    }

    return 0;
}