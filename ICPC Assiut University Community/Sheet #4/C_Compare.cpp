#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s, k;
    cin >> s >> k;

    if(s > k)
    {
        cout << k << '\n';
    }
    else 
    {
        cout << s << '\n';
    }
    return 0;
}