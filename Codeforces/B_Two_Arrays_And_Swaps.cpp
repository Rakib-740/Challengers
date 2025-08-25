#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for (int i = 0; i < k && i < n; i++) 
        {
            if (a[i] < b[i]) 
            {
                swap(a[i], b[i]);
            } 
            else 
            {
                break;
            }
        }

        long long sum = 0;
        for (int x : a) sum += x;
        cout << sum << endll;
    }
    return 0;
}