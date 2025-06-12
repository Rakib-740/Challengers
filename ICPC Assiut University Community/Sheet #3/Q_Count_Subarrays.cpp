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

        long long count = 0;
        int length = 1;

        for (int i = 1; i < t; i++) {
            if (arr[i] >= arr[i - 1]) {
                length++;
            } else {
                count += (1LL * length * (length + 1)) / 2;
                length = 1;
            }
        }

        count += (1LL * length * (length + 1)) / 2;
        cout << count << '\n';
    }

    return 0;
}