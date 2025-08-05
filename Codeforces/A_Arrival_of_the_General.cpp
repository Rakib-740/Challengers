#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n; 

    vector<int> arr(n);
   
    for (int &x : arr) cin >> x;

    int max_height = *max_element(arr.begin(), arr.end());
    int min_height = *min_element(arr.begin(), arr.end());

    int max_index = find(arr.begin(), arr.end(), max_height) - arr.begin();

    int min_index = n - 1 - (find(arr.rbegin(), arr.rend(), min_height) - arr.rbegin());
    
    int swaps = max_index + (n - 1 - min_index);
    if (min_index < max_index) swaps--;

    cout << swaps << endll;
   
    return 0;
}