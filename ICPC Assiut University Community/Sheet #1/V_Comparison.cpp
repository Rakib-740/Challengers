#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    getline(cin, s);

    int a, b;
    char sign;

    istringstream ss(s);
    ss >> a >> sign >> b;

    if(sign == '<')
    {
        if(a < b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if(sign == '>')
    {
        if(a > b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }  
    }
    else
    {
        if(a == b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}