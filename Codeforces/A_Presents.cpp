#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    vector<int> arr(n), result(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        result[arr[i] - 1] = i;
    }
    for(int i = 0; i < n; i++)
    {
        cout << result[i] + 1;
        if(i < n - 1)
        {
            cout << " ";
        }
    }
    cout << endll;
    return 0;
}