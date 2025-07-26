#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    while(n--)
    {
        int x;
        cin >> x;

        if ((x / 2) % 2 != 0)
        {
            cout << "NO" << endll;
            continue;
        }

        cout << "YES" << endll;

        vector<int> a;

        for (int i = 1; i <= x / 2; ++i)
        {
            a.push_back(i * 2);
        }

        for (int i = 1; i < x / 2; ++i)
        {
            a.push_back(i * 2 - 1);
        }

        int sum_even = (x / 2) * (x / 2 + 1); 
        int sum_odd = (x / 2 - 1) * (x / 2 - 1); 
        a.push_back(sum_even - sum_odd);

        for (int v : a) cout << v << " ";
        cout << endll;
    }

    return 0;
}
