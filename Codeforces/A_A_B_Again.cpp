#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        int a; cin >> a;
        int sum = 0;

        sum += a % 10;
        sum += a / 10;

        cout << sum << endll;
    }
    return 0;
}