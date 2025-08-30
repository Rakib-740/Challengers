#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) 
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];

        for (int i = 0; i < 5; i++) 
        {
            int idx = min_element(v.begin(), v.end()) - v.begin();
            v[idx]++;
        }

        cout << 1LL * v[0] * v[1] * v[2] << endll;
    }
    return 0;
}