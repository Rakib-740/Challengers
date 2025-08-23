#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] <= (5 - k))
        {
            count++;
        }
    }
    cout << (count / 3) << endll;

    return 0;
}
