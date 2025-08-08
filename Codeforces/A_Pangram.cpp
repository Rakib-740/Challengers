#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a; cin >> a;
    string s; cin >> s;
    

    set<char> alfabet;

    for(int i = 0; i < a; i++)
    {
        char c = tolower(s[i]); 

        alfabet.insert(c);
    }
    if(alfabet.size() == 26)
    {
        cout << "YES" << endll;
    }
    else
    {
        cout << "NO" << endll;
    }
    return 0;
}