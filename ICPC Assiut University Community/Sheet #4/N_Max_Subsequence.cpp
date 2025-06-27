#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    string s; cin >> s;

    string temp = "";

    for(int i = 0; i < n; i++)
    {
        if(s[i] == s[i+1])
        {
            continue;
        }
        else
        {
            temp += s[i];
        }
    }
    cout << temp.size() << endll;
    return 0;
}