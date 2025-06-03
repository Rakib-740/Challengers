#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;

    for(int j = 1; j <= n*4; j++)
    {
        if(j % 4 != 0)
        {
            cout << j << " ";
        }
        else
        {
            cout << "PUM" << '\n';
        }

    }
    return 0;
}