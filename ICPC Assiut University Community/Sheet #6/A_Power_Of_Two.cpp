#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    long long n; cin >> n;

    if((n & (n -1)) == 0)
    {
        cout << "YES" << endll;
    }
    else
    {
        cout << "NO" << endll;
    }
    
    return 0;
}