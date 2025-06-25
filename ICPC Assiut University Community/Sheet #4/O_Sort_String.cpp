/*
#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    string s; cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < s.length() - i - 1; j++)
        {
            if(s[j] > s[j + 1])
            {
                swap(s[j],s[j + 1]);
            }
        }
    }
    cout << s << endll;
    return 0;
}
 */
#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    int count[26] = {0};
    char c;
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        count[c - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        while(count[i] > 0)
        {
            cout << (char)(i + 'a');
            count[i]--;
        }
    }
    cout << endll;
    return 0;
}