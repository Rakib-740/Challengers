#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_wel = *max_element(arr.begin(), arr.end());

    long long total = 0;

    for(int i = 0; i < n; i++)
    {
        total += (max_wel - arr[i]);
    }

    cout << total << endll;
    return 0;
}