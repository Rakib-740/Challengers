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
        string s; cin >> s;

        int ballon = 0;
        vector<int> pos(26, 0);
        for(int i = 0; i < n; i++)
        {
            if(pos[s[i] - 'A'] == 0) {
                pos[s[i] - 'A']++;
                ballon += 2;
            }
            else 
            {
                ballon++;
            }
        }

        cout << ballon << endll;
    }
    return 0;
}