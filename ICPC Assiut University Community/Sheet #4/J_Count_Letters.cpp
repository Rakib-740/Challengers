#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; 
    getline(cin, s);

    map<char, int> count;

    for(char c : s)
    {
        count[c]++;
    }

    for(auto& x : count)
    {
        cout << x.first << " : " << x.second << endll;
    }
    return 0;
}