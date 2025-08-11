#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        string s; cin >> s;

        int sum_f = 0;
        int sum_l = 0;
        int n = s.size();
        sum_f += s[0] - 'a';
        sum_f += s[1] - 'a';
        sum_f += s[2] - 'a';

        sum_l += s[3] - 'a';
        sum_l += s[4] - 'a';
        sum_l += s[5] - 'a';

        if(sum_l == sum_f)
        {
            cout << "YES" << endll;
        }
        else
        {
            cout << "NO" << endll;
        }
    }
    return 0;
}