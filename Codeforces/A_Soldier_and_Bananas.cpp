#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long k, n, w;

    cin >> k >> n >> w;

    long long price = 0;
    for(int i = 1; i <= w; i++)
    {
        price += i * k;
    }
    
    cout << max(0LL , price - n) << endll;
    
    
    return 0;
}