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
        int odd = 0, even = 0, sum = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2) odd++;
            else even++;
        }

        if (even == n) 
        {
            cout << "YES" << endll;
        } 
        else if (odd == n) 
        {
            if (n % 2 == 0) cout << "YES" << endll;
            else cout << "NO" << endll;
        } 
        else 
        {
            if (n == 2) cout << "NO" << endll;
            else if (sum % 2 == 0) cout << "YES" << endll; 
            else cout << "NO" << endll;
        }
    }
    return 0;
}