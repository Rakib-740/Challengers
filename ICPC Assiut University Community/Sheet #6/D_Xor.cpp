#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    long long A, B, Q;
    cin >> A >> B >> Q;

    long long result;
    if(Q % 3 == 1) {
        result = A;
    }
    else if(Q % 3 == 2) {
        result = B;
    }
    else {
        result = A ^ B;
    }

    cout << result << endll;
    return 0;
}
