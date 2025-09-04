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
        set<int> arr1;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr1.insert(arr[i]);
        }
        if(arr1.size() != n)
        {
            cout << "NO" << endll;
        }
        else
        {
            cout << "YES" << endll;
        }
    }
    return 0;
}