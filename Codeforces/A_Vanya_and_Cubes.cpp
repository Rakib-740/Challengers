#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int height = 0;
    int used = 0;

    for (int level = 1; ; level++) {
        int cubes_needed = (level * (level + 1)) / 2;
        used += cubes_needed;

        if (used > n)
            break;

        height++;
    }

    cout << height << endll;


    return 0;
}