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
        int winner = -1, max = 0;
        for(int i = 1; i <= n; i++)
        {
            int a, b; cin >> a >> b;

            if(a > 10)
            {
                continue;
            }
            else
            {
                if(b > max)
                {
                    max = b;
                    winner = i;
                }
            }
        }
        cout << winner << endll;
    }
    return 0;
}