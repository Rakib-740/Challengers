#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
        return result;
}

long long nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

long long nPr(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

int main() {
    fast;
    int n, r; cin >> n >> r;

    long long NcR = nCr(n,r);
    long long NpR = nPr(n,r);

    cout << NcR << " " << NpR << endll;
    return 0;
}