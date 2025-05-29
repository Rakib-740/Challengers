#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    
    double left = b*log(a);
    double right = d*log(c);

    if(left > right)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}