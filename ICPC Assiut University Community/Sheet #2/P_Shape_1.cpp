#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;

     for(int i = n; i >= 1; i--)
        {
            for(int j = 1; j <= i; ++j)
            {
                cout << "*";
            }
            cout << '\n';
        }
    return 0;
}