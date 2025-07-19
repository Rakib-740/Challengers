#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;         
    int total_limes = c * d;         
    int total_salt = p;             

    int toast_by_drink = total_drink / (n * nl);
    int toast_by_limes = total_limes / n;
    int toast_by_salt = total_salt / (n * np);

    int max_toasts = min({toast_by_drink, toast_by_limes, toast_by_salt});

    cout << max_toasts << endll;
    return 0;
}
