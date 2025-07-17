#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

// Function to check if a number is lucky (contains only 4 and 7)
bool isLucky(int n) {
    if(n == 0) return false;  // Edge case: 0 is not lucky
    while(n > 0) {
        int d = n % 10;
        if(d != 4 && d != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    fast;
    string s; 
    cin >> s;

    int luckyCount = 0;

    for(char c : s) {
        if(c == '4' || c == '7') {
            luckyCount++;
        }
    }

    if(isLucky(luckyCount)) {
        cout << "YES" << endll;
    } else {
        cout << "NO" << endll;
    }

    return 0;
}
