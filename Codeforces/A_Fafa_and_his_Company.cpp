#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    int count = 0;

    for(int i = 1; i <= n/2; i++)
    {
        if((n - i) % i == 0)
        {
            count++;
        }
    }
    cout << count << endll;
    return 0;
}