#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        string s = "";
        cin >> s;
        if(s.size() == 2)
        {
            cout << s << endll;
            continue;
        }

        string orginal = "";

        for(int i = 0; i < s.size(); i+=2)
        {
            orginal += s[i];
        }
        orginal += s.back();

        cout << orginal << endll;
    }
    return 0;
}