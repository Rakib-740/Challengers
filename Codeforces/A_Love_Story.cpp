#include <bits/stdc++.h>
using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string original = "codeforces";

    while (n--) {
        string t;
        cin >> t;
        int count = 0;

        for (int i = 0; i < 10; i++) {
            if (t[i] != original[i]) {
                count++;
            }
        }

        cout << count << endll;
    }

    return 0;
}
