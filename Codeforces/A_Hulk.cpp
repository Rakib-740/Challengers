#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    if(n == 1)
    {
        cout << "I hate it" << endll;
        return 0;
    }
    
    for(int i = 1; i < n; i++)
    {
        if(i & 1)
        {
            cout << "I hate that ";
        }
        else
        {
            cout << "I love that ";
        }
    }

    if(n & 1)
    {
        cout << "I hate it" << endll;
    }
    else
    {
        cout << "I love it" << endll;
    }    
    return 0;
}