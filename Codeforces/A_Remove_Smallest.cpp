#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        bool possible = true;

        for (int i = 1; i < n; i++) 
        {
            if (a[i] - a[i - 1] > 1) 
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}