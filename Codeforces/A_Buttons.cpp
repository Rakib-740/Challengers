#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        int a, b, c; 
        cin >> a >> b >> c;

        if(a > b)
        {
            cout << "First" << endll;
        }
        else if(b > a)
        {
           cout << "Second" << endll;
        }
        else if(a == b)
        {
            if(c & 1)
            {
                cout << "First" << endll;;
            }
            else
            {
                cout << "Second" << endll;
            }
        }
    }
    return 0;
}