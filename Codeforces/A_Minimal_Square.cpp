#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--) 
    {
        int a, b;
        cin >> a >> b;

        int side = min(max(2*a, b), max(2*b, a));
        cout << side * side << endll;
    }
    return 0;
}