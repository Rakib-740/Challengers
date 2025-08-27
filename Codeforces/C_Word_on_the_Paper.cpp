#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        vector<vector<char>> arr(8, vector<char>(8));

        string x = "";
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j] != '.')
                {
                    x += arr[i][j];
                }
            }
        }
        cout << x << endll;
    }
    return 0;
}