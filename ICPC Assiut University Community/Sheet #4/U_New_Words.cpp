#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'e' || s[i] == 'E')
        {
            e++;
        }
        else if(s[i] == 'g' || s[i] == 'G')
        {
            g++;
        }
        else if(s[i] == 'y' || s[i] == 'Y')
        {
            y++;
        }
        else if(s[i] == 'p' || s[i] == 'P')
        {
            p++;
        }
        else if(s[i] == 't' || s[i] == 'T')
        {
            t++;
        }
    }
    cout << min(e, min(g,min(y,min(p,t)))) << endll;
    return 0;
}
/*
Clean code

#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for(int i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        if (c == 'e') e++;
        else if (c == 'g') g++;
        else if (c == 'y') y++;
        else if (c == 'p') p++;
        else if (c == 't') t++;
    }
    cout << min({e, g, y, p, t}) << endll;
    return 0;
}
*/