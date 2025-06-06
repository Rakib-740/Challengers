#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; 
    cin >> n;

    while (n--) {
        int t; 
        cin >> t;
        vector<int> arr(t);

        for (int i = 0; i < t; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < t; i++) {
            int max_val = arr[i];
            for (int j = i; j < t; j++) {
                max_val = max(max_val, arr[j]);
                cout << max_val << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
