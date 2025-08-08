#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    set<long long> s;

    for(int i = 0; i < 4; i++)
    {
        long long x;
        cin >> x;

        s.insert(x);
    }
    cout << 4 - s.size() << endll;
    return 0;
}