#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    int x = 0;
    while(n--)
    {
        string s; cin >> s;
        int t = s.length();
        if(s[0] == '+' || s[t-1] == '+')
        {
            x++;
        }
        else if(s[0] == '-' || s[t - 1] == '-')
        {
            x--;
        }
    }
    cout << x << endll;
    return 0;
}