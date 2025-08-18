#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; 
    cin >> n;
    int x, y;
    if(n & 1)
    {
        x = 9;
        y = n - 9;
    }
    else
    {
        x = 4;
        y = n - 4;
    }
    cout << x << " " << y << endll;
    return 0;
}