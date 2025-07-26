#include <bits/stdc++.h>
using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string correct = "Timur";
    sort(correct.begin(), correct.end());

    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n != 5) 
        {
            cout << "NO" << endll;
            continue;
        }

        sort(s.begin(), s.end());

        if (s == correct)
            cout << "YES" << endll;
        else
            cout << "NO" << endll;
    }

    return 0;
}
