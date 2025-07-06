#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void swaping_matrix()
{
    int n, x, y; cin >> n >> x >> y;

    vector<vector<long long int>> arr(n,vector<long long int>(n));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    x--,y--;
    swap(arr[x], arr[y]);

    for(int i = 0; i < n; i++)
    {
        swap(arr[i][x], arr[i][y]);
    }
    for(auto row : arr)
    {
        for(auto element : row)
        {
            cout << element << " ";
        }
        cout << endll;
    }
}

int main() {
    fast;
    swaping_matrix();
    
    return 0;
}
