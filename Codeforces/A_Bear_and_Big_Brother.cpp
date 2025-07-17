#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int a, b; cin >> a >> b;
    int i = 0;
    while(b >= a)
    {
        a *= 3;
        b *= 2;
        i++;
    }
    cout << i << endll;
    return 0;
}