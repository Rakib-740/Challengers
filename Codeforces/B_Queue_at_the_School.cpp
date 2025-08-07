#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;

    string s; cin >> s;

    
    while(t--)
    {
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
        
    }
    
    cout << s << endll;
    return 0;
}