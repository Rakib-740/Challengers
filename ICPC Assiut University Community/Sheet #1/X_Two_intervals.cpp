#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long maxi = max(a,c);
    long long mini = min(b,d);

    if(maxi > mini)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << maxi << " " << mini << endl;
    }
    return 0;
}