#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n; 

    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == b)
        {
            cout << c << endll;
        }
        else if(b ==  c)
        {
            cout << a << endll;
        }
        else
        {
            cout << b << endll;
        }
    }
    return 0;
}