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

        if(a < b && b < c)
        {
            cout << "STAIR" << endll;
        }
        else if(a < b && c < b)
        {
            cout << "PEAK" << endll;
        }
        else
        {
            cout << "NONE" << endll;
        }
    }
    return 0;
}