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

        long long remainder = a % b;
        long long moves = (b - remainder) % b;
        cout << moves << endll;
    }
    return 0;
}