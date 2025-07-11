#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;

    long long a, b, x;
    cin >> a >> b >> x;

    long long L = min(a, b);
    long long R = max(a, b);

    long long first = (L + x - 1) / x * x;  
    long long last = R / x * x;

    if (first > last) 
    {
        cout << 0 << endll;
    } 
    else 
    {
        long long n = ((last - first) / x) + 1;
        long long sum = n * (first + last) / 2;
        cout << sum << endll;
    }

    return 0;
}
