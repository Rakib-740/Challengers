#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    cin >> s;
    double b = stod(s);
    int x =  floor(b);
    double a = b - x;
    if(a != 0)
    {
        cout << "float " << x << " " << a;
    }
    else{
        cout << "int " << x;
    }
    return 0;
}