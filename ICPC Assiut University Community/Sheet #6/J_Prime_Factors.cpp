#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;

    long long n; cin >> n;

    vector<pair<long long, int>> factors;

    int count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    if (count > 0) {
        factors.push_back({2, count});
    }

    for (long long i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            factors.push_back({i, count});
        }
    }

    if (n > 1) {
        factors.push_back({n, 1});
    }

    for (size_t i = 0; i < factors.size(); ++i) {
        cout << "(" << factors[i].first << "^" << factors[i].second << ")";
        if (i != factors.size() - 1)
            cout << "*";
    }

    cout << endll;
    return 0;
}
