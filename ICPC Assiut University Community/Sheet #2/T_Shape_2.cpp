#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n -i; j++)
        {
            cout << " ";
        }
        for(int k = 1; k <= (2*i -1); k++)
        {
            cout << "*";
        }
    
        cout << '\n';
    }
    return 0;
}