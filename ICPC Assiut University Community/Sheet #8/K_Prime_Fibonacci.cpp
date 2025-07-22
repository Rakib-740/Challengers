#include <bits/stdc++.h>
using namespace std;

#define endll '\n'

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> fib(51);
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= 50; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    vector<string> fib_prime(51);
    for (int i = 1; i <= 50; ++i) {
        fib_prime[i] = is_prime(fib[i]) ? "prime" : "not prime";
    }

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << fib_prime[N] << endll;
    }

    return 0;
}
