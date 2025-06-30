#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;
    
    string str = s;

    for(int i = 1; i < s.length(); i++)
    {
        string s1 = s.substr(0,i);
        string s2 = s.substr(i);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        str = min(str, (s1 + s2));
    }
    cout << str << endll;
    return 0;
}