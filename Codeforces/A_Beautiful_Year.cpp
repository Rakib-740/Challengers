#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    while(true)
    {
        n++;
        string s = to_string(n);

        set<char> dis(s.begin(), s.end());

        if(dis.size() == 4)
        {
            cout << n << endll;
            break;
        }
    }
    
    return 0;
}