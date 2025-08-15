#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        string s = to_string(n);
        int len = s.size();

        int count = (len - 1) * 9;

        long long first = 0;
        for (int i = 0; i < len; i++) 
        {
            first = first * 10 + (s[0] - '0');
        }

        if (first <= n)
            count += s[0] - '0';
        else
            count += s[0] - '0' - 1;

        cout << count << endll;
    }
    return 0;
}