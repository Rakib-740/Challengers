#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n, m; cin >> n >> m;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for(int i = 0; i < m; i++)
    // {
    //     int count = 0;
    //     for(int j = 0; j < n; j++)
    //     {
    //         if(arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }
    //     cout << count << '\n';
    // }

    unordered_map<int, int> frequencyMap;
    
    for (int i = 0; i < n; i++) 
    {
        frequencyMap[arr[i]]++;
    }

    for (int i = 1; i <= m; i++) 
    {
    cout << frequencyMap[i] << '\n';
    }
    return 0;
}