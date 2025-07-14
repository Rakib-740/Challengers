#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    long long int h, k; cin >> h >> k;

    double r; cin >> r;

    int n; cin >> n;

    while(n--)
    {
        long long int x, y; cin >> x >> y;

        double distance = (h - x) * (h - x) + (k - y) * (k - y);
        double radius = r * r;

        if(distance <= radius)
        {
            cout << "YES" << endll;
        }
        else
        {
            cout << "NO" << endll;
        }
    }
    return 0;
}