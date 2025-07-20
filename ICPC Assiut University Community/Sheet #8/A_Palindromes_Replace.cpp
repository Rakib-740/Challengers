#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s, temp; cin >> s;

    

    for(int i = 0; i < s.size(); i++)
    {
        int j = s.size() - 1 - i;
        if(s[i] == '?' && s[j] != '?')
        {
            s[i] = s[j];
        }
        else if(s[i] != '?' && s[j] == '?')
        {
            s[j] = s[i];
        }
        else if(s[i] == '?' && s[j] == '?')
        {
            s[i] = s[j] = 'a';
        }
    }

    temp = s;

    reverse(temp.begin(), temp.end());
    if(temp == s)
    {
        cout << s << endll;
    }
    else
    {
        cout << "-1" << endll;
    }
    
    return 0;
}