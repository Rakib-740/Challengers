#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    long long a = 0; 
    long long b = 1;
    for(int i = 1; i < n; i++)
    {
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << a << "\n";
    
    return 0;
}

