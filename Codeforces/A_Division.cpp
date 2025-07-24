#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        long long point; cin >> point;

        if(point >= 1900)
            cout << "Division 1" << endll;
        else if(point <= 1899 && point >= 1600)
            cout << "Division 2" << endll;
        else if(point <= 1599 && point >= 1400)
            cout << "Division 3" << endll;
        else
            cout << "Division 4" << endll;
    }
    return 0;
}