#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int k, s;
    cin >> k >> s;
    int count = 0;

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - x - y;
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }

    cout << count << '\n';
    return 0;
}
