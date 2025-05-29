#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int a;

    cin >> a;

    for(int i = 0; a >= 10; i++)
    {
        a = a / 10;
    }
    if(a % 2 == 0)
    {
        cout << "EVEN";
    }
    else{
        cout << "ODD";
    }
    return 0;
}