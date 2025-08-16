#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast;
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        vector<int> freq(n + 1, 0); 

        int answer = -1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
            if (freq[arr[i]] == 3 && answer == -1) {
                answer = arr[i]; 
            }
        }

        cout << answer << "\n";
    }
    return 0;
}
