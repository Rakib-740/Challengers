#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        int c1 = n / 3;
        int c2 = (n - c1) / 2;

        while(true)
        {
            if(c1 + 2*c2 == n)
            {
                cout << c1 << " " << c2 << endll;
                break;
            }
            else 
            {
                c1++;
            }

        }

        
    }
    return 0;
}