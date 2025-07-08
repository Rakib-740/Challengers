#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

long long gcd(long long a, long long b) {
    while(b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; // avoid overflow by dividing first
}

int main() {
    fast;

    long long a, b;
    cin >> a >> b;

    cout << gcd(a, b) << " " << lcm(a, b) << endll;

    return 0;
}
