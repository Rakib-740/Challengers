#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    double digits = 0;
    for (int i = 2; i <= n; i++)
    {
        digits += log10(i);
    }

    return floor(digits) + 1;
}

int main() {
    fast;
    int n; cin >> n;

    int facto = factorial(n);

    
    cout << "Number of digits of " << n << "! is " << facto << endll;
    return 0;
}