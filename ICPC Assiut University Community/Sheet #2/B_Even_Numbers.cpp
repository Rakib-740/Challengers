#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n;
    cin >> n;
    if(n < 2)
    {
        cout << "-1" <<'\n';
        return 0;
    }

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << '\n';
        }
    }
    return 0;
}
