#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    int rem, temp = n, sum = 0;
    while(temp !=0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    cout << sum << '\n';
    if(sum == n)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    return 0;
}