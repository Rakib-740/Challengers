#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    double a, b;

    cin >> a >> b;

    // Q1
    if(a > 0 && b > 0)
    {
        cout << "Q1" << endl;
    }
    //Q2
    else if(a < 0 && b > 0)
    {
        cout << "Q2" << endl;
    }
    //Q3
    else if(a < 0 && b < 0)
    {
        cout << "Q3" << endl;
    }
    //Q4
    else if(a > 0 && b < 0)
    {
        cout << "Q4" << endl;
    }
    else if(a == 0 && b == 0)
    {
        cout << "Origem" << endl;
    }
    else if((a > 0 || a < 0) && b == 0)
    {
        cout << "Eixo X" << endl;
    }
    else if((b > 0 || b < 0) && a == 0)
    {
        cout << "Eixo Y" << endl;
    }
    return 0;
}