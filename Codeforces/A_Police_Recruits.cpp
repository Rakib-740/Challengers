#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    int available = 0, untreated = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        
        if(x > 0)
        {
            available += x;
        }
        else
        {
            if(available > 0)
            {
                available--;
            }
            else
            {
                untreated++;
            }
        }
    }

    cout << untreated << endll;
    return 0;
}