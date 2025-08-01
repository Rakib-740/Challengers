#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x; cin >> x;

    int count = x / 5;
    x = x % 5;
    
    if(x >= 4)
    {
        count += x / 4;
        x %= 4;
    }
    else if(x >= 2)
    {
        count += x / 2;
        x %= 2;
    }
    else if(x > 0)
    {
        count += x;
    }

    cout << count << endll;
    return 0;
}