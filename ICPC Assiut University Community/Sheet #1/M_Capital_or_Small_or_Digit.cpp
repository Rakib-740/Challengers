#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    cin >> s;
    
    if(isdigit(s[0]))
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;

        if(s[0] >= 'A' && s[0] <= 'Z')
        {
            cout << "IS CAPITL" << endl;
        }
        else{
            cout << "IS SMALL" << endl;
        }
    }
    return 0;
}
