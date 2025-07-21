#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s = "", t = ""; 
    cin >> s >> t;
    int count = 1;
    int j = 0;
    for(int i = 0; i < t.size(); i++)
    {
        if(t[i] == s[j])
        {
            count++;
            j++;
        }
    }

    cout << count << endll;
    return 0;
}