#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, result = ""; cin >> s;
    int t = 0;
 
    while(t < s.size())
    {
        if(s[t] == '.')
        {
            result += '0';
            t++;
        }
        else if(s[t] == '-' && s[t + 1] == '.')
        {
            result += '1';
            t += 2;
        }
        else if(s[t] == '-' && s[t + 1] == '-')
        {
            result += '2';
            t += 2;
        }
        
    }
    cout << result << endll;
    return 0;
}