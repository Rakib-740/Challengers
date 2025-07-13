#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    long long int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int min_x = min({x1, x2, x3, x4});
    int max_x = max({x1, x2, x3, x4});
    int min_y = min({y1, y2, y3, y4});
    int max_y = max({y1, y2, y3, y4});

    int n; cin >> n;

    while(n--)
    {
        long long x,y; cin >> x >> y;

        if (x >= min_x && x <= max_x && y >= min_y && y <= max_y)
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