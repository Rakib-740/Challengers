#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, k; cin >> n >> k;

    while(k--)
    {
        if(n % 10 != 0)
        {
            n--;
        }
        else
        {
            n = n / 10;
        }
    }
    cout << n << endll;
    return 0;
}