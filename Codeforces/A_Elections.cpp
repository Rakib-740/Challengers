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
        int a, b, c;
        cin >> a >> b >> c;
        
        int maximum = max({a, b, c}); 

        if(a == maximum && (a > b && a > c)) 
            cout << 0 << " ";
        else
            cout << (maximum - a + 1) << " ";

        if(b == maximum && (b > a && b > c)) 
            cout << 0 << " ";
        else
            cout << (maximum - b + 1) << " ";

        if(c == maximum && (c > a && c > b)) 
            cout << 0 << endll;
        else
            cout << (maximum - c + 1) << endll;
    }

    return 0;
}
