#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a - b);
        long long moves = diff / 10;
        if(diff % 10 != 0)
            moves++;

        cout << moves << endll;
    }
    return 0;
}