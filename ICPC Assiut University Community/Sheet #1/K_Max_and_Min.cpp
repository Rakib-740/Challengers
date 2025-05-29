#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long a, b, c;
    cin >> a >> b >> c;

    long long max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    long long min = a;
    if(min > b)
    {
        min = b;
    }
    if(min > c)
    {
        min = c;
    }
    cout << min << " " << max << endl;
    return 0;
}