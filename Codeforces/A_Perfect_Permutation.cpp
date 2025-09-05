#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    if (n & 1) 
    {
        cout << -1 << endll;
    } 
    else 
    {
        for (int i = 1; i <= n; i += 2) 
        {
            cout << i + 1 << " " << i << " ";
        }
        cout << endll;
    }
    return 0;
}