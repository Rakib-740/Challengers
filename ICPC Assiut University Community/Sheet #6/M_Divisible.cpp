#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string N; cin >> N;

    long long X; cin >> X;

    long long rem = 0;
    for (char c : N) {
        rem = (rem * 10 + (c - '0')) % X;
    }

    if(rem != 0)
    {
        cout << "NO" << endll;
    }
    else
    {
        cout << "YES" << endll;
    }
    return 0;
}