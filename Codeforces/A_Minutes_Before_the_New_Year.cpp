#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        int h, m;
        cin >> h >> m;

        int total_minutes = 60 - m;
        h++;
        while(h != 24)
        {
            total_minutes += 60;
            h++;
        }
        cout << total_minutes << endll;

    }
    return 0;
}