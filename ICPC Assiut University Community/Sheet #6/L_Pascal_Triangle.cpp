#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    vector<vector<int>> pascal(n);

    for(int i = 0; i < n; i++)
    {
        pascal[i].resize(i + 1);
        pascal[i][0] = pascal[i][i] = 1;

        for(int j = 1; j < i; j++)
        {
            pascal[i][j] = pascal[i -1][j-1] + pascal[i - 1][j];
        }
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << pascal[i][j];
            if(j != i) cout << " ";
        }
        cout << endll;
    }
    return 0;
}
