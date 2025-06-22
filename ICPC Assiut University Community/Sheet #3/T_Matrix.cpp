#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int diagonal_sum1 = 0;
    int diagonal_sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                diagonal_sum1 += arr[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        
        diagonal_sum2 += arr[i][n - 1 - i];
        
    }
    int sum = (abs)(diagonal_sum1 - diagonal_sum2);
    cout << sum <<endll;
    return 0;
}