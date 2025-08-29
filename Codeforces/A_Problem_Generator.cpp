#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        string s; cin >> s;
        vector<int> arr(7);
        for(int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'A']++;
        }
        int result = 0;
        for(int i = 0; i < 7; i++)
        {
            if(arr[i] < m)
            {
                result += (m - arr[i]);
            }
        }
        cout << result << endll;
    }
    return 0;
}