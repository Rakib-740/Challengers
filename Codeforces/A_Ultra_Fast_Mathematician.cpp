#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2; 
    cin >> s1 >> s2;
    string s = "";
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == s2[i])
        {
            s += '0';
        }
        else
        {
            s += '1';
        }
    }
    cout << s << endll;
    return 0;
}