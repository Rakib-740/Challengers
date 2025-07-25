#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

// int gcd(int a, int b)
// {
//     int rem;
//     while(b != 0)
//     {
//         rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        int a; cin >> a;

        // int i = a / 2;
        // int j = a;
        // int max_gcd = gcd(i, j);
       
        cout << a/2 << endll;
    }
    return 0;
}