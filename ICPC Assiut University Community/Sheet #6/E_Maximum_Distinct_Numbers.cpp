#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    long long n; cin >> n;

    cout << (long long)floor((-1 + sqrt(1 + 8 * n)) / 2.0) << endll;
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;
// #define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endll '\n'

// int main() {
//     fast;
//     long long n, i; cin >> n;
//     long long sum = 0; 
//     for(i = 1; i <= n; i++)
//     {
//         sum += i;
//         if(sum > n)
//         {
//             break;
//         }
//     }
//     i--;
//     cout << i << endll;
//     return 0;
// }