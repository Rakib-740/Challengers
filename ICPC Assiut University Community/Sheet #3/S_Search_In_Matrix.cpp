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
    int x; cin  >> x;
    // bool flag = false;

    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         if(arr[i][j] == x)
    //         {
    //             flag = true;
    //             break;
    //         }
    //     }
    //     if(flag) break;
    // }

    for(const auto& row : arr)
    {
        if(find(row.begin(), row.end(), x) != row.end())
        {
            cout << "will not take number" << endll;
            return 0;
        }
    }
    
    // if(flag)
    // {
    //     cout << "will not take number" << endll;
    // }
    // else
    // {
    //     cout << "will take number" << endll;
    // }

    // cout << (flag? "will not take number" : "will take number") << endll;
    cout << "will take number" << endll;
    return 0;
}
