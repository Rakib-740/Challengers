#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n,vector<char>(m));
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] != 'W' && arr[i][j] != 'B' && arr[i][j] != 'G')
            {
                flag = true;
                
            }
        }
    }

    if(!flag)
    {
        cout << "#Black&White" << endll;
    }
    else
    {
        cout << "#Color" << endll;
    }
    return 0;
}