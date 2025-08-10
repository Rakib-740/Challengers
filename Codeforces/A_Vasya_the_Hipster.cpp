#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;

    cout << min(a, b);

    if(a == b)
    {
        cout << " " << "0" << endll;
    }
    else
    {
        if(a > b)
        {
            a -= b;
            int count = a / 2;
            cout << " " << count << endll;
        }
        else
        {
            b -= a;
            int count = b / 2;
            cout << " " << count << endll;
        }
    }

    return 0;
}