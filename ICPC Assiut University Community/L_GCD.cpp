#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int a, b, rem; 
    cin >> a >> b;

    while(b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    cout << a;
    return 0;
}