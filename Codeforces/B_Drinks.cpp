#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;

        sum += a;
    }

    double result = (double)sum / n;

    cout << fixed << setprecision(12) << result << endll;

    return 0;
}