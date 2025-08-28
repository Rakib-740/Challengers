#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    long long res = 1;
    int r = n - 1, N = 2 * n - 2;

    if (r > N - r) r = N - r;
    for (int i = 0; i < r; i++) 
    {
        res *= (N - i);
        res /= (i + 1);
    }
    cout << res << endll;
    return 0;
}