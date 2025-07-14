#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int a1, a2; cin >> a1 >> a2;

    vector<vector<int>> A(a1, vector<int>(a2));

    for(int i = 0; i < a1; i++)
    {
        for(int j = 0; j < a2; j++)
        {
            cin >> A[i][j];
        }
    }

    int b1, b2; cin >> b1 >> b2;

    vector<vector<int>> B(b1, vector<int>(b2));

    for(int i = 0; i < b1; i++)
    {
        for(int j = 0; j < b2; j++)
        {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> C(a1, vector<int>(b2, 0));

    for(int i = 0; i < a1; i++)
    {
        for(int j = 0; j < b2; j++)
        {
            for(int k = 0; k < a2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i = 0; i < a1; i++)
    {
        for(int j = 0; j < b2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endll;
    }

    return 0;
}