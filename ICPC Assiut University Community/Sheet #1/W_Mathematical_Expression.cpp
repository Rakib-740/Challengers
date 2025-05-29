#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    getline(cin, s);

    int a, b,c;
    char sign, equal;

    istringstream ss(s);
    ss >> a >> sign >> b >> equal >> c;

    if(sign == '+')
    {
        int temp = a + b;
        if(temp == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << temp << endl;
        }
    }
    else if(sign == '-')
    {
        int temp = a - b;
        if(temp == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << temp << endl;
        }
    }
    else
    {
        int temp = a * b;
        if(temp == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << temp << endl;
        }
    }
    return 0;
}