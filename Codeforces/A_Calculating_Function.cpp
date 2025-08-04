#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n; 
    cin >> n;

    if(n & 1)
    {
        cout << "-" << (n + 1)/2 << endll;
    }
    else
    {
        cout << n / 2 << endll;
    }
    return 0;
}
