#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    int current = 0, maximum = 0;

    while(n--)
    {
        int a, b; cin >> a >> b;

        current = (current - a) + b;

        maximum = max(maximum, current);
    }

    cout << maximum << endll; 
    return 0;
}