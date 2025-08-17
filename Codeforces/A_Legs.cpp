#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--)
    {
        int n; cin >> n;

        int count = 0;

        if(n / 4 != 0)
        {
            count += n / 4;
            n %= 4;
        }
        
        if(n / 2 != 0)
        {
            count += n / 2;
        }
        cout << count << endll;
    }
    return 0;
}