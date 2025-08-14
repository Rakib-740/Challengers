#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        int min_array = INT_MAX, a;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] < min_array) {
                min_array = arr[i];
                a = i;
            }
        }
        arr[a]++;
        long long sum = 1;
        for(int i = 0; i < n; i++) {
            sum *= arr[i];
        }
        cout << sum << endll;

    }
    return 0;
}