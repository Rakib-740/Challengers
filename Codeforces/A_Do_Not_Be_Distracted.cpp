#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> seen; 
        bool suspicious = false;

        for (int i = 0; i < n; i++) 
        {
            if (i > 0 && s[i] != s[i-1]) 
            {  
                if (seen.count(s[i])) 
                {
                    suspicious = true;
                    break;
                }
                seen.insert(s[i-1]);
            }
        }

        cout << (suspicious ? "NO" : "YES") << "\n";
    }
    return 0;
}
