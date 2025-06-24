#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, m; cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = m - 1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endll;
    }
    return 0;
}