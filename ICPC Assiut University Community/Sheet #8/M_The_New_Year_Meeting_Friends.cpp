#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int dis = max({a, b, c}) - min({a, b, c});
    cout << dis << endll;
    return 0;
}