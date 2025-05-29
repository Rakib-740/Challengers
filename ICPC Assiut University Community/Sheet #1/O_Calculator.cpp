#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    int a, b;
    char sign;

    getline(cin, s);

    stringstream ss(s);
    ss >> a >> sign >> b;

    if(sign == '+')
    {
        cout << a + b << endl;
    }
    else if(sign == '-')
    {
        cout << a - b << endl; 
    }
    else if(sign == '*')
    {
        cout << a * b << endl; 
    }
    else
    {
        cout << a / b << endl;
    }

    return 0;
}