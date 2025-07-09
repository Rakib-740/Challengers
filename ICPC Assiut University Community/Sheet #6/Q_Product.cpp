#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int l,r,m; cin >> l >> r >> m;

    long long result = 1;

    for (int i = l; i <= r; i++)
    {
        result = (result * i) % m;
        if(result == 0)
        {
            break;
        }
    }
    cout << result << endll;
    return 0;
}