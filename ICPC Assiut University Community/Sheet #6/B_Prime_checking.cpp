#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    long long n; cin >> n;

    if(n < 2)
    {
        cout << "NO" << endll;
        return 0;
    }
    else if(n == 2)
    {
        cout << "YES" << endll;
        return 0; 
    }
    bool flag = true;
    for(long long i = 2; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout << "YES" << endll;
    }
    else
    {
        cout << "NO" << endll;
    }
    return 0;
}