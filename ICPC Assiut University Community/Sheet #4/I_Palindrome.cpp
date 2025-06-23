#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;

    string temp;
    int n = s.length();
    bool flag = true;
 
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[n - i - 1] != s[i])
        {
            flag = false;
        }
    }

    if(flag)
    {
        cout << "YES" << endll;
    }
    else
    {
        cout << "NO" << endll;
    }
    return 0;
}
