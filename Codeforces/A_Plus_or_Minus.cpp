#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    
    while(n--)
    {
        long long a, b, c;

        cin >> a >> b >> c;

        if((a + b) == c)
            cout << "+" << endll;
        else if((a - b) == c)
            cout << "-" << endll;
    }
    return 0;
}