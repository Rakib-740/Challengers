#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, m; cin >> n >> m;

    vector<string> A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int x, y; cin >> x >> y;

    int d1[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int d2[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    bool flag = true;

    for(int i = 0; i < 8; i++)
    {
        int dx = x - 1 - d1[i];
        int dy = y - 1 - d2[i];

        if(dx >= 0 && dx < n && dy >= 0 && dy < m)
        {
            if(A[dx][dy] != 'x')
            {
                flag = false;
                break;
            }
        }
    }
    cout << (flag? "yes" : "no") << endll;
    return 0;
}