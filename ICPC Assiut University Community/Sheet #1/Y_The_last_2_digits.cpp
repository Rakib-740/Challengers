#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<long long> nums = {a, b, c, d};
    long long res = 1;

    for (int i = 0; i < 4; ++i) {
        res = (res * (nums[i] % 100)) % 100;
    }

    if (res < 10) cout << '0';
    cout << res;
    return 0;
}
