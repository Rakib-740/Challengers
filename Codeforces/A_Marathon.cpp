#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if(a < b)
        {
            count++;
        }
        if(a < c)
        {
            count++;
        }
        if(a < d)
        {
            count++;
        }
        cout << count << endll;
    }
    return 0;
}