#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

bool prime_or_not(int a)
{
    
    if(a < 2)
    {
        return false;
    }
    else
    {
        for(int i = 2; i * i <= a; i++)
        {
            if(a % i == 0)
            {
                return false;
                break;
            }
        }
        return true;
    }
}

int main() {
    fast;
    int n; cin >> n;

    while(n--)
    {
        int a; cin >> a;
        bool flag = prime_or_not(a);
        if(flag)
        {
            cout << "YES" << endll;
        }
        else
        {
            cout << "NO" << endll;
        }

    }
    return 0;
}