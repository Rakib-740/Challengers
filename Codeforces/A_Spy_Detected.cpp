#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n; cin >> n;
        vector<int> arr(n);
          unordered_map<int,int> frequency;
        
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            frequency[arr[i]]++;
        }
        int value = 0;
        for(auto x : frequency)
        {
            if(x.second == 1)
            {
                value = x.first;
            }
        }
        auto it = find(arr.begin(), arr.end(), value);
        int index = it - arr.begin();
        index++;
        cout << index << endll;
    }
    return 0;
}