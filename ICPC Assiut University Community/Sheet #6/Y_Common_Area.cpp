#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int t; cin >> t;

    for(int i = 1; i <= t; i++)
    {
        int n; cin >> n;
        long long max_x1 = -1e9, max_y1 = -1e9;
        long long min_x2 = 1e9, min_y2 = 1e9;

        while(n--)
        {
            long long x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            max_x1 = max(max_x1, x1);
            max_y1 = max(max_y1, y1);
            min_x2 = min(min_x2, x2);
            min_y2 = min(min_y2, y2);
        }

        long long area = 0;
        if(min_x2 > max_x1 && min_y2 > max_y1)
        {
            area = (min_x2 - max_x1) * (min_y2 - max_y1);
        }

        cout << "Case #" << i << ": " << area << endll;
    }
    return 0;
}
