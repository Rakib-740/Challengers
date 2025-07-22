#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    bool flag = true;
    bool changed = false;
    int temp = INT_MAX;

    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if (a != b) changed = true;
        if (a > temp) flag = false;
        temp = a;
    }

    cout << (changed ? "rated" : flag ? "maybe" : "unrated") << endll;
    return 0;
}