#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    int count = 0;
    
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i ==0)
            {
                count++;
            }
    }
    
    if(count > 0)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
    }
    return 0;
}