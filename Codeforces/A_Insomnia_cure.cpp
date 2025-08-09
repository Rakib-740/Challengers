#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> unique_dragons;

    for(int i = 1; i <= d; i++)
    {
        if(i % k == 0)
        {
            
            unique_dragons.insert(i);
        }
        else if(i % l == 0)
        {
            unique_dragons.insert(i);
        }
        else if(i % m == 0)
        {
            unique_dragons.insert(i);
        }
        else if(i % n == 0)
        {
            unique_dragons.insert(i);
        }
    }
    cout << unique_dragons.size() << endll;
    return 0;
}