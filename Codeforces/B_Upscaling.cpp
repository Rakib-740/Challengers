#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        for (int i = 0; i < n; i++) 
        {
            for (int row = 0; row < 2; row++) 
            {
                for (int j = 0; j < n; j++) 
                {
                    char c = ((i + j) % 2 == 0 ? '#' : '.');
                    cout << string(2, c);
                }
                cout << endll;
            }
        }
    }
    return 0;
}