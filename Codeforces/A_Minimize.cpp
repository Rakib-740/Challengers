#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        int a, b; cin >> a >> b;
        int min_c = b - a;
        
        cout << min_c << endll;
    }
    return 0;
}